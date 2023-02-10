#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct{
	
    int chave;
    
    char nome[20];
    
}Registro;

typedef struct{
	
   Registro itens[1001];
   
   int tamanho;
   
}Tabela;

void quest2(Tabela *t){
	
    int i, j;
    
    char nome[]="Gol";
    
    srand(time(NULL));
    
    i=0;
    
    do{
    	
        t->itens[i].chave = rand()%1001;
        
        for(j=0; j<=3; j=j+1){
        	
            t->itens[i].nome[j] = nome[j];
            
        }
        
        i=i+1;
        
    }while(i<1000);
}

void quest3(Tabela t){
	
    int num, i, j, ct, soma=0;
    
    float m=0;
    
    srand(time(NULL));
    
    for(i=0; i<100; i=i+1){
    	
        ct=0;
        
        srand(time(NULL));
        
        num = (rand()%1000);
        
        for(j=0; j< t.tamanho; j=j+1){
        	
            if(num == t.itens[i].chave){
            	
                ct=1;
                
            }
            
            if(ct==1){
            	
                break;
                
            }
        }
        
        soma+=j;
    }
    
    m=(soma/100);

    printf("A media de registros percorridos eh %.0f \n", m/2);
    
}

void quest4(Tabela t){
	
    int i, cont=0, codigo;
    
    printf("codigo para pesquisar:\n");
    
    scanf("%d", &codigo);
    
    for(i=0; i<t.tamanho; i=i+1){
    	
        if(t.itens[i].chave==codigo){
        	
            cont=cont+1;
            
        }
    }
    
    if(cont<2){
    	
        printf("O codigo %d se repete %d vez.\n", codigo, cont+1);
        
    }else{
    	
        printf("O codigo %d se repete %d vezes.\n", codigo, cont);
        
    }
    
}

void quest5(Tabela *t){
	
    int i, ct, chave;
    
    printf(" A chave removida:\n");
    
    scanf("%d", &chave);
    
    for(i=0; i< t->tamanho; i=i+1){
    	
        if(t->itens[i].chave == chave){
        	
            ct=ct+1;
            
            if(ct>1){
            	
                (t->itens[i].chave = t->itens[t->tamanho-1].chave);
                --t->tamanho;
                
            }
        }
    }
    
	printf("%d Registros com os codigos %d foram removidos\n", ct, chave);
    
}

int quest6(Tabela t, char nome[]){
	
    int i, aux;
    
    for(i=0; i<t.tamanho; i=i+1){
    	
        aux=strcmp(t.itens[i].nome, nome);
        
        if(aux==0){
        	
            return t.itens[i].chave;
        }
    }
    
    return -10;
}

void quest7(Tabela *t){
	
    int i, chave, aux, resp;
    
    char nome[20];
    
    printf("Digite a chave:\n");
    scanf("%d",&chave);
    
    printf("Digite o nome: \n");
    scanf("%s", &nome);
    
    aux=questao06(*t, nome);
    
    if(aux==-10){
    	
        printf("Nao existem registros desse veiculo. Digite 0 para cancelar e 1 para confirmar a insercao:\n");
        
    }else{
    	
        printf("Existem registros desse veiculo. Digite 0 para cancelar e 1 para confirmar a insercao:\n");
    }
    
    scanf("%d", &resp);
    
    if(resp==1){
    	
        ++ t->tamanho;
        
        t->itens[t->tamanho-1].chave=chave;
        
        for(i=0; i<20; i=i+1){
        	
            t->itens[t->tamanho-1].nome[i] = '\0';
        }
        
        for(i=0; i<= strlen(nome)-1; i=i+1){
        	
            t->itens[t->tamanho-1].nome[i]=nome[i];
        }
        
        printf("Insercao completa!\n");
        
    }
    
    else{
    	
        printf("Insercao cancelada!\n");
    }
    
}

int main(){
	
    Tabela tabela;
    tabela.tamanho = 1000;
    
    int i;
    char nome[20];
    
	quest2(&tabela);
    quest3(tabela);
    quest4(tabela);
    quest5(&tabela);
    
    printf("Nome a ser pesquisado:\n");
    scanf("%s", &nome);
    
    if(quest6(tabela, nome)!= -10){
    	
       printf("A chave para esse veiculo eh: %d\n", questao06(tabela, nome));
       
    }else{
    	
       printf("Modelo nao registrado.\n");
       
    }

	quest7(&tabela);
	
	printf("********************\n");
    
    return 0;
}
