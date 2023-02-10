#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct carta{
	
    char *face;
    char *naipe;
};

void preenche(struct Carta *deck, char *face[], char *naipe[] );
void embaralha(struct Carta *deck );
void imprime(struct Carta *deck );

void main(){
	
    srand(time(NULL));
    int opcao;
    
    char *face[] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", 
    "Dama", "Rei"};
    
    char *naipe[] = {"Paus", "Ouros", "Copas", "Espadas"};
    
    struct carta deck[52];
    preenche(deck,face, naipe);

    scanf("%d",&opcao);

    if(opcao == 1){
    	
        imprime(deck);
    }
    
    else if(opcao == 0){
    	
        embaralha(deck);
        imprime(deck);
    }

}

void preenche(struct carta *deck, char *face[], char *naipe[]){
	
    int aux = 0;
    
    for(int i = 0; i < 4; i++){
    	
        for(int j = 0; j < 13; j++){
        	
            deck[aux].naipe = naipe[i];
            deck[aux].face = face[j];
            aux++;
        }
    }
}

	void imprime(struct Carta *deck ){
	
    for(int i = 0; i < 52; i++){
    	
        printf("%s de %s\n",deck[i].face,deck[i].naipe);
    }
}

void embaralha(struct Carta *deck){
	
    for(int i = 0; i < 52; i++){
    	
        int posi = rand() % 51;
        struct Carta temp = deck[i];
        deck[i] = deck[posi];
        deck[posi] = temp;
    }
}
