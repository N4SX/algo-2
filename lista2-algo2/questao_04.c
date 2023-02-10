#include <stdio.h>
#include <stdlib.h>

void main(){
    
    int i, n[10]={0}, j, cont, cop[10]={0};
    
    for(i=0;i<10;i++){
    	
        printf("Numero: ");
        scanf("%d", &n[i]);
        
        while(cont!=-1){
            
            for(j=1;j<=10;j++){
            	
                if(n[i]==n[i-1]){
                	
                    cont=-1;
                }
            }
            if(cont!=-1){
            	
                printf("N: %d\n", n[i]);
            }
            cont=-1;
        }
        cont=0;
        
    }

}
