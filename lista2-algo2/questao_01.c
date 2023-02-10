#include<stdio.h>

void main(){
	
	int i=0, j=0, alunos[40], mult[11]={0};
	
	for (i=0; i<=40; i++){
		
		scanf("%d", &alunos[i]);
		
		if(alunos[i]==-1){
			
		break;
		
			}
			
			for(j=0; j<=10; j++){
				
				if(alunos[1]==j){
					
					mult[j] +=1;
				}
			}
		}
	for(j=0; j<=10; j=j+1){
		
		printf("%d%d\n" , j,mult[j]);
	}
	
}
