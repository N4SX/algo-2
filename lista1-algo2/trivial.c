#include <stdio.h>
   
int main(){
	
    int a, b, it = 0;
    
    scanf("%d", &a);
    scanf("%d", &b);
        
    while (a != b){
    	
        if (a > b){
        	
        	a = a - b;
        	printf("\nMDC(%d,%d)", b, a);
        	it++;
		}else{
			
        	b = b - a;
        	printf("\nMDC(%d,%d)", a, b);
        	it++;
		}
		it++;
        }
        
    printf("\n%d", a);
    printf("\nInteracoes: %d", it);
    
return 0;

   }
