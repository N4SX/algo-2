#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int craps();

int dado1, dado2, somdados = 0,ponto = 0;

int main(){
	
	 srand(time(NULL));
	 
	craps();
	
	return 0;
}
	
	int craps(){
		
		dado1 = rand() % 5 + 1;
    	dado2 = rand() % 5 + 1;

    somdados = dado1 + dado2;
    
    if(somdados == 7  && somdados == 11){
    	
        printf("Soma dos dados %d + %d = %d\n",dado1,dado2,somdados);
        printf(" O jogador ganhou :) \n",dado1,dado2,somdados);
        return 0;
    }
    
    else if(somdados == 2  || somdados == 3 || somdados == 12){
    	
        printf("Soma dos dados %d + %d = %d\n",dado1,dado2,somdados);
        printf("O jogador perdeu \n",dado1,dado2,somdados);
        return 0;
    }
    
    else{
    	
        ponto = somdados;
        printf("Soma dos dados %d + %d = %d\n",dado1,dado2,somdados);
        printf("O ponto eh %d\n",ponto);
        
        dado1 = rand() % 5 + 1;
        dado2 = rand() % 5 + 1;

        somdados = dado1 + dado2;

        while(somdados != ponto){
        	
            dado1 = rand() % 5 + 1;
            dado2 = rand() % 5 + 1;

            somdados = dado1 + dado2;

            printf("Soma dos dados %d  + %d = %d\n",dado1,dado2,somdados);

            if(somdados == 7){
            	
                printf("O jogador perdeu \n",dado1,dado2,somdados );
                return 0;
            }
        }
        
        printf("Soma dos dados %d + %d = %d\n",dado1,dado2,somdados);
        printf("O jogador ganhou :) \n");

    }
		
	}
	
   
