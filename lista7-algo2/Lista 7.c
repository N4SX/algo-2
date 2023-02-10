#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef struct{
	
	int chave;
	char nome[30];
	char endereco[50];
	char telefone[14];
	
} alunos;

void gerarDados(alunos *v, int n, int ordemChave){
	
	int i;
	
	switch(ordemChave){
		
		case 0:
			for(i=0;i<n;i++){
				
				v[i].chave=i;
			}
			break;
		case 1:
			srand(time(NULL));
			
			for(i=0;i<n;i++){
				
				v[i].chave=rand() % 10000;
			}
			break;
		case 2:
			for(i=n-1;i>=0;i--){
				
				v[i].chave=i;
				printf("%d ", v[i].chave);
			}
			break;
		default:
			break;
	}
}

void bolha(alunos *v, int n){
	
	int i, j;
	
	alunos aux;
	
	for(i=0;i<n-1;i++){
		
		for(j=1;j<n-i;j++){
			
			if(v[j].chave<v[j-1].chave){
				aux = v[j];
	            v[j] = v[j-1];
	            v[j-1] = aux; 	
			}
		}
	}
}

void selecao(alunos *v, int n){
	
	int i, j, menor;
	alunos aux;
	for(i=0;i<n-1;i++){
		
		menor=i;
		for(j=i+1;j<n;j++){
			
			if(v[j].chave<v[menor].chave){
				
				menor=j;
			}
		}
		aux = v[i];
	    v[i] = v[menor];
	    v[menor] = aux; 
	}
}

void insercao(alunos *v, int n){
	
	int i, j;
	alunos aux;
	for(i=1;i<n;i++){
		
		aux=v[i];
		j=i-1;
		while ((j>=0) && (aux.chave<v[j].chave)){
			
			v[j+1]=v[j];
			j--;
		}
		
		v[j+1]=aux;
	}
}

void main(){
	
	int num, key, ord, i;
	scanf("%d", &num);
	alunos chave[num];
	while(key!=3){
		
		scanf("%d %d", &key, &ord);
		
		if(key==3){
			
			break;
		}
		if(key==0 && ord==0){
			
			printf("\nbolha\n");
			
			gerarDados(chave, num, key);
			
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
			
			bolha(chave, num);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
		}
		if(key==0 && ord==1){
			
				printf("\nbolha\n");
				
			gerarDados(chave, num, key);
			
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
			bolha(chave, num);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
		}
		if(key==0 && ord==2){
			
			printf("\nbolha\n");
			
			gerarDados(chave, num, key);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
			bolha(chave, num);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
		}
		if(key==1 && ord==0){
			
			printf("\nselecao\n");
			
			gerarDados(chave, num, key);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
			selecao(chave, num);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
		}
		if(key==1 && ord==1){
			
			printf("\nselecao\n");
			
			gerarDados(chave, num, key);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
			selecao(chave, num);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
		}
		if(key==1 && ord==2){
			
			printf("\nselecao\n");
			
			gerarDados(chave, num, key);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
			selecao(chave, num);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
		}
		if(key==2 && ord==0){
			
			printf("\ninsercao\n");
			
			gerarDados(chave, num, key);
			printf("\n");
			insercao(chave, num);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
		}
		if(key==2 && ord==1){
			
			printf("\ninsercao\n");
			
			gerarDados(chave, num, key);
			printf("\n");
			insercao(chave, num);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
		}
		if(key==2 && ord==2){
			
			printf("\ninsercao\n");
			
			gerarDados(chave, num, key);
			printf("\n");
			insercao(chave, num);
			for(i=0;i<num;i++){
				
				printf("%d ", chave[i].chave);
			}
			printf("\n");
		}
	}
}
