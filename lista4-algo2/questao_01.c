#include <stdio.h>
#inclide <stdlib.h>
#include <math.h>

void main(){

	struct aluno{
		
	char nome[20];
	float ira;
	float altura;
	float peso;
	int ano;
};
	
	struct aluno medida[5];
	int i, aux, cont, aux2, aux3;
	float maiori=1, maiora=1, maiorp=1;
	
	for(i=0;i<5;i=i+1){
		
		printf("Digite o nome: ");
		setbuf(stdin,NULL);
		
		scanf("%[^\n]s", medida[i].nome);
		
		printf("Digite a altura: ");
		scanf("%f", &medida[i].altura);
		
		printf("Digite o peso: ");
		scanf("%f", &medida[i].peso);
		
		printf("Digite o IRA: ");
		scanf("%f", &medida[i].ira);
		
		setbuf(stdin,NULL);
	}
	
	for(i = 0; i < 5; i=i+1){
		
		if(medida[i].altura > maiora){
			
			maiora = medida[i].altura;
			aux = i;
			
		}
	}
	
	for(i = 0; i < 5; i=i+1){
		
		if(medida[i].peso > maiorp){
			
			maiorp = medida[i].peso;
			aux2 = i;
			
		}
	}
	
	for(i = 0; i < 5; i=i+1){
		
		if(medida[i].ira > maiori){
			
			maiori = medida[i].ira;
			aux3 = i;
			
		}
	}
	
	printf ("\n");
	
	for(i = 0; i < 5; i=i+1){
		
    printf ("Media peso: %f.2\n", medida[i].peso + medida[i].peso + medida[i].peso + medida[i].peso + medida[i].peso / (1+2+3+4+5));
 	printf ("Media altura: %f.2\n", medida[i].altura + medida[i].altura + medida[i].altura + medida[i].altura + medida[i].altura / (1+2+3+4+5));
	printf ("Media ira: %f.2\n", medida[i].ira + medida[i].ira + medida[i].ira + medida[i].ira + medida[i].ira / (1+2+3+4+5));
	
	printf ("\n");
	
	for(i = 0; i < 5; i=i+1) 
	
	printf ("\n");
	
	printf("aluno com maior altura: %s, %.2f\n", medida[aux].nome, maiora);
	printf("aluno com maior peso: %s, %.2f\n", medida[aux2].nome, maiorp);
	printf("aluno com maior IRA: %s, %.2f\n", medida[aux3].nome, maiori);

}

}
