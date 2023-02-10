#include<stdio.h>

int invert(int);

	int main(){
	
    int num;
    
    scanf("%d", &num);
    invert(num);

}

	int invert(int numero){
	
    int inv;
    
    if(numero >= 0){
    	
        do{
        	
            inv = numero % 10;
            printf("%d", inv);
            numero /= 10;
            
        }while(numero != 0);
        
    }
    
    else{
    	
        numero *= -1;
        printf("-");
        
        do{
        	
            inv = numero % 10;
            printf("%d", inv);
            numero /= 10;
            
        }while(numero != 0);
        
    }
    
    printf("\n");
}
