#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int simulacao();

void main(){
	
    int i, ca = 0, co = 0, r;
    srand((unsigned) time(NULL));

    for(i = 0; i < 100; i=i+1){ 
    
	    r = simulacao();

        if(r == 0){
        	
            printf("Coroa\n");
            co=co+1;

        }else if(r == 1){
        	
            printf("Cara\n");
            ca++;

        }
    }

    printf("\nCara: %d vezes\n", ca);
    printf("Coroa: %d vezes\n", co);
	
}

int simulacao(){

    return rand() % 2;
}
