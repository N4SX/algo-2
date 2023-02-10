#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto{
		
double X1, X2, Y1, Y2;
	
};
	
	double D;
	
	int calculo();
	
	struct ponto cord;

void main (){

	printf("Digite dois pontos (X1 e X2)\n");
	scanf("%lf %lf", &cord.X1, &cord.X2);

	printf("Digite dois pontos (Y1 e Y2)\n");
	scanf("%lf %lf", &cord.Y1, &cord.Y2);
	
	calculo();
	
	printf("\nA Distancia Euclideana eh: %f", D);

}

int calculo(){
	
	D = sqrt(((cord.X1-cord.X2))*(cord.X1-cord.X2)+((cord.Y1-cord.Y2)*(cord.Y1-cord.Y2)));
	
	return 0;
}
