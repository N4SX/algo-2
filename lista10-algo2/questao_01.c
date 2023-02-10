#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct locacao{
	
	int codigo;
	char nome[20];
};

void preencher(locacao *p1){
	
	for(int i=1;i<=1000;i=i+1){
		
		p1->codigo=rand()%1000;
		
		strcpy(p1->nome,"gol");
		++p1;
	}
}
void salvarDados(locacao *tabela, char nome[20]){
	
	FILE *salvar;
    if((salvar=fopen(nome, "w"))== NULL){
    	
		printf("O arquivo nao pode ser aberto\n");
		
	}else{
		
		for(int i=0; i<1000;i=i+1){
			
			fprintf(salvar,"%d %s\n",tabela[i].codigo,tabela[i].nome);
		}
		
		fclose(salvar);
		printf("operacao concluida com sucesso\n");	
	}
}
void restaurarDados(locacao *tabela, char nome[20]){
	
	FILE *restaurar;
	
	if((restaurar=fopen(nome, "r"))==NULL){
		
		printf("O arquivo n pode ser aberto");
		
	}else{
		
		for(int i=0;i<1000;i=i+1){
			
				fscanf(restaurar,"%d%s",&tabela[i].codigo,tabela[i].nome);
				printf("entrou");
		}
		
		fclose(restaurar);
		
		printf("operacao concluida com sucesso\n");	
	}
}

int main(){
	
	srand(time(NULL));
	locacao t[1000];
	locacao r[1000];
	printf("digite a operacao desejada (1-salvar, 2-restaurar)\n");
	
	int n;
	scanf("%d",&n);
	char nome[20];
	
	if(n==1){
		
		printf("digite o nome do arquivo\n");
		scanf("%s", nome);
		preencher(t);
	    salvarDados(t,nome);
	}   
	 
	if(n==2){
		
		printf("digite o nome do arquivo de backup\n");
		scanf("%s", nome);
	    restaurarDados(r,nome);
	}    
	
	for(int i=0;i<1000;i=i+1){
		
		printf("%d %s\n",r[i].codigo,r[i].nome);
	}
    
    return 0;
}
