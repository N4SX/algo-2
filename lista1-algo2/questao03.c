#include <stdio.h>

int main(){
	
char regiao;
int passagem;
  
 scanf("%c", &regiao);
 
 scanf("%d", &passagem);
 
 switch (regiao){
 	
 	case 'a':
 		case 'A':
 		if (passagem == 1){
 			printf("R$900,00");
		 }else{
		 	printf("R$500,00");
		 	
		 }break;
		 
 	case 'b':
 		case 'B':
 		if (passagem == 1){
 			printf("R$650,00");
		 }else{
		 	printf("R$350,00");
		 	
		 }break;
		 
 	case 'c':
 		case 'C':
 		if (passagem == 1){
 			printf("R$600,00");
		 }else{
		 	printf("R$350,00");
		 	
		 }break;
		 
	case 'd':
		case 'D':
 		if (passagem == 1){
 			printf("R$550,00");
		 }else{
		 	printf("R$300,00");
		 	
		 }break;
	
	default:
		
	break;
}

  return 0;
}