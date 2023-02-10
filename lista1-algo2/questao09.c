#include <stdio.h>

int main(){
	
        int x, y, cont=1;

        scanf("%d %d", &x, &y);

        while(cont<=y){
        	
            printf("*");
            cont++;
        }
        printf("\n");

        cont=1;
        while( cont <= y*(x-2)){
        	
            if( (cont % y == 1)){
            	printf("*");
            	
			}
                
            else{
			
                if((cont%y == 0)){
                	
                    printf("*\n");
                    
                }
                else{
                	
                    printf(" ");
                    
                    }
		}
            cont++;
        }

       
        cont=1;
        while(cont<=y){
        	
            printf("*");
            cont++;
            
        }
        printf("\n");

	return 0;
}