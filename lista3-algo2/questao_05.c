#include <stdio.h>

int adivinhar(){

return(1 + (rand() % 1000));

}

main(void){
	
	int cont, sort, num;
	sort = adivinhar();

	printf("\tVoce pode adivinhar meu numero?\n");

	for(cont=1;; cont++){
	
	scanf("%d", &num);

	if(num < sort){
	
	printf("Muito baixo! \n", num);
	}
	
	else if(num > sort){
	
	printf("Muito alto! \n", num);
	}
	
else{
	
printf("\n\tExcelente! Voce adivinhou o numero! \n", num, cont);

break;

	}
}

return 0;

}
