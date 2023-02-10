#include <stdio.h>

int main(){
	
        int lado, cont=1;

        scanf("%d", &lado);

        while( cont <= lado*lado){
        	
            if(cont % lado == 0)
                printf("**\n");
            else
                printf("*");

            cont++;
        }
        
	return 0;
}