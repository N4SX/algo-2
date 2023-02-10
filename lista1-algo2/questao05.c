#include <stdio.h>

int main(){

	int idd1, idd2, idd3, idd4, iddHV, iddHN, iddMV, iddMN;

	scanf("%d %d %d %d", &idd1, &idd2, &idd3, &idd4);
	
	if(idd1 >= idd2){
		
		iddHV = idd1;
		iddHN = idd2;
	}else{
		
		iddHV = idd2;
		iddHN = idd1;
	}
	
	if(idd3 >= idd4){
		
		iddMV = idd3;
		iddMN = idd4;
	}else{
		
		iddMV = idd4;
		iddMN = idd3;
	}
	
	printf("%d %d\n", iddHV+iddMN, iddHN * iddMV);
	system("PAUSE");
	
	return 0;
}
