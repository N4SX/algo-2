#include<stdio.h>
#include<math.h>

 void raizes (float a, float b, float c, float *x1, float *x2);
 
 int main(){
 	
 	float a, b, c;
 	float x1, x2;
 	
 	while(1){
 		
 		scanf("%f", &a);
 		if( a== 0){
 			
		 }
		 
		 break;
	 }
 	  
 	  scanf("%f %f", &b, &c);
 	  
 	  raizes(a, b, c, &x1, &x2);
 	  
 		return 0;
 }
 
 void raizes (float a, float b, float c, float *x1, float *x2 ){
 	
 	float delta = b * b - (4 * a * c);
 	
 	if (delta >= 0){
 		
 		*x1 = (-b + sqrt(delta))/(2*a);
 		*x2 = (-b - sqrt(delta))/(2*a);
 		printf("%.1f %.1f\n", *x1, *x2 );
 		
	 }else{
	 	
	 	printf("complexo/n");
	 }
 }
 
