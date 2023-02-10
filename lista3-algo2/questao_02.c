#include <stdio.h>
#include <math.h>

float calculaDistancia(float Px1, float Px2, float Py1, float Py2);

void main(){
	
 float x1, x2, y1, y2, res;
 
 printf("Digite as coordenadas X e Y do ponto 1:\n");
 scanf("%f %f", &x1, &y1);
 
 printf("Digite as coordenadas X e Y do ponto 2:\n");
 scanf("%f %f", &x2, &y2);
 
 res = calculaDistancia(x1, x2, y1, y2);
 
 printf("A distancia entre os pontos eh: %f\n", res);
 
}

float calculaDistancia(float Px1, float Px2, float Py1, float Py2){
	
 float a, b, c, d;
 
 a = Px1 - Px2; 
 b = Py1 - Py2; 
 c = a * a + b * b; 
 d = sqrt(c); 
 
 return d; 
 
}
