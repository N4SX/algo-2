#include<stdio.h>

int main(){
	
	float valor;
	
	printf("Digite o valor da compra: ");
	scanf("%f", &valor);
	
	if(valor < 20){

		valor = valor * 1.45;
	}else{
		
		valor = valor * 1.30;
	}
	
	printf("\n %.2f", valor);
	
	return 0;
}