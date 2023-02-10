#include <stdio.h>

void somaComplexo(float rz1, float iz1, float rz2, float iz2, float *rz3, float *iz3){
	
	*rz3 = rz1 + rz2;
	*iz3 = iz1 + iz2;
}

void main(){
	
	float rz1, rz2, rz3, iz1, iz2, iz3;
	int cont = 1;
	
	while(cont!=0){
		
			scanf("%f",&rz1);
			
			if(rz1!=0.0){
				
			scanf("%f",&iz1);
			scanf("%f",&rz2);
			scanf("%f",&iz2);
			somaComplexo(rz1,iz1,rz2,iz2,&rz3,&iz3);
			printf("%.1f + %.1fi\n",rz3,iz3);
				
			}else{
				
				cont=0;
			}
	}
	
}
