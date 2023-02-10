#include <stdio.h>

    void main(){
    	
    int i, j[10], x = 0;

    for (i = 0; i < 10; i++){
        	
            x = x + 2;
            
			j[ i ] = x;
			
        }
        
    printf( "%s%13s\n", "Elemento", "Valor" );

    for (i = 0; i < 10; i++){
        	
    printf("%7d%13d\n", i, j[ i ] );
    
        }
        
    }
