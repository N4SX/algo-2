#include <stdio.h>
	
void cubo(int *nPtr);
int n;

int main(){
	
	int *nPtr;
	while(1){
		
		scanf("%d", &n);
		if(n == 0){
			
		break;
		}
		
		cubo(&nPtr);
		
		}
		return 0;
	}
	
void cubo(int *nPtr){
	
	*nPtr = (n) * (n) * (n);
	
	printf("%d\n", *nPtr);
}
