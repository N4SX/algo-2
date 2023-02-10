#include <stdio.h>

void main(){
	
float desc, salario;
scanf ("%f", &salario);

if(salario <= 600.0){
	desc = 0.0;
 }else{

 	if(salario <= 1200.0){
 		desc = 0.2;
 		
	 }else{

	 	if(salario <= 2000.0){
	 		desc = 0.25;
	 		
		 }else{
		 	desc = 0.3;
		 	
		 }
	 }
   }
    printf("\n%.2f", desc*salario);
    printf("\n%.2f", salario-(salario*desc));
}