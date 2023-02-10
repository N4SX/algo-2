#include <stdio.h>

int it = 0;

int mdc(int a, int b){

   int q = 0, r = 0;
   
   do{

      q = b / a;
      r = b % a;
		
      b = a;      
      if (r) a = r;
      
      printf("\nMDC(%d, %d)", a, b);
      
      it++;
      
   }while (r != 0);
   
   return a;

}

void main(){

   int a = 0, b = 0;   
   
   scanf("%d %d", &a, &b);
   
   printf("\nMDC = %d\n", mdc(a,b));
   
   printf("\nInteracoes: %d", it);
   
}
