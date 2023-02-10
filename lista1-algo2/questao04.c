#include <stdio.h>

void main(){
	
int quanti;
float preco;

scanf("%d", &quanti);

if (quanti <= 12){
	
	preco = 1.3;
	
   }else{
   	
	preco = 1.0;
	
  }	
	printf ("R$ %.2f", quanti*preco);
	
 }