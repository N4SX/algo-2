#include <stdio.h>

#define MAX 50

int main(){

    char nome[MAX];
    int i = 0;
    
    printf("\n ");
    scanf("%[^\n]s", nome);
    
 while (nome[i] != '\0'){
 	
    	if(nome[i] >= 'a' && nome[i] <= 'z'){
    		
    		printf("%c ", nome[i] - 32);
		}
        
        i++;
    }
    
    return 0;
}

