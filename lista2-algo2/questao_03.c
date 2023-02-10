#include <stdio.h>
#define MAX 20

int main(){
	
	char palavra[MAX], r = 'r';
	int i, aux[MAX], j=0;
	
	printf("Informe uma palavra:");
	
	scanf("%[^\n]s", &palavra);
	
	for(i=0;i<20;i++){
		
		if(palavra[i] == r){
			
			palavra[i]='l';
			aux[j] = i+1;
			j++;
		}
	}

	printf("Cebolinha falaria: %s\n", palavra);

	printf("Houve uma troca nos caracteres:" );

 	for(i=0; i<j; i++){
 		
 		printf("%d ", aux[i]);
	}
	
	return 0;
 }
