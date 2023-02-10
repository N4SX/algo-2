#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int palavras();

char artigo[][10] = {"o","um", "algum", "todo", "qualquer"}, 
substantivo[][10] = {"menino", "homem", "cachorro", "carro", "gato"}, 
verbo[][10] = {"passou", "pulou", "correu", "saltou", "andou"}, 
preposicao[][10] = {"sobre", "sob", "ante", "ate", "com"};

int art, subs, verb, prep, art1, subs1, i, j; 

void main(){
	
	srand(time(NULL));
	palavras();
	
}

int palavras(){
	
	for (i = 0; i <= 19; i++){
	
	art = rand() % 5;
	subs = rand() % 5;
	verb = rand() % 5;
	prep = rand() % 5;
	art1 = rand() % 5;
	subs1 = rand() % 5;
		
	printf("%s %s %s %s %s %s.\n", artigo[art], substantivo[subs], verbo[verb], preposicao[prep], artigo[art1], substantivo[subs1]);
	
	}
	
}

