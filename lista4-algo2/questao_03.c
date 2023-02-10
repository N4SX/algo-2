#include <stdio.h>
#include <string.h>
#include <time.h>

#define MAX 50
#define qtd_Valor 13
#define qtd_Naipes 4

struct Cartas{
	
	char valor[50];
	char naipe[50];
};

struct Cartas deck[52];

void montaDeck();
void imprimeDeck();
void embaralhaDeck();

char valores[13][50] = {"As", "Dois", "Tres", "Quatro", "Cinco", "Seis", "Sete", "Oito", "Nove", "Dez", "Valete", "Dama", "Rei"};
char naipes[4][50] = {"Paus", "Ouros", "Copas", "Espadas"};

void main(){
	
	srand(time(NULL));
	int num;
	
	montaDeck();
	
	scanf("%d", &num);
	
	if (num == 1){
		
		imprimeDeck();
	}else{
		
		embaralhaDeck();
	}
		
}

void montaDeck(){
	
	int i=0, j=0;
	
	for (i=0; i<4; i++){
		
		strcpy(deck[i].naipe, naipes[i]);
		for (j=0; j<13; j++){
			
			strcpy(deck[j].valor, valores[j]);
		}
	}
}

void imprimeDeck(){
	
	int i=0, j=0;
	
	for (i=0; i<4; i++){
		
		for (j=0; j<13; j++){
			
			printf("%s de %s\n", deck[j].valor, deck[i].naipe);
		}
	}
}

void embaralhaDeck(){
	
	int i=0, j=0;
	
	for (i=0; i<4; i++){
		for (j=0; j<13; j++){
			printf("%s de %s\n", deck[rand()%13].valor, deck[rand()%4].naipe);
		}
	}	
}

