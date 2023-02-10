#include <stdio.h>

    void main(){
    	
        int i, j, x[10];

        for (i = 0; i < 10; i++){
        	
           scanf("%d", &x[i]);
        }
        printf( "Elemento        Valor\n" );

        for (i = 0; i < 10; i++){
        	
            printf("%8d%10d\n", i, x[ i ] );
        }
        
        printf("Histograma\n");
        
        for(i=0; i<10; i++){
        	
        for (j=0; j< x[i]; j++){
        	
        printf("*");
        
		}
		
        printf("\n");
	}
        
    }
