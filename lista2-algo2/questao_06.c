#include<stdio.h> 

#define M 3
#define N 3
#define P 3

void main(){
	
int A[M][N],B[N][P],C[M][P] = {0}, aux = 0;
int i, j, y;

    for(i = 0; i < M; i=i+1){
    	
        for(j = 0; j < N; j=j+1){
            scanf("%d",&A[i][j]);
        }
    }
    
    for(i = 0; i < N; i=i+1){
    	
        for(j = 0; j < P; j=j+1){
            scanf("%d",&B[i][j]);
        }
    }
    
    for(i = 0; i < M; i=i+1){
    	
		for( j = 0; j < P; j=j+1){
			
			C[i][j] = 0;
			for( y = 0; y < N; y=y+1){
				
				aux +=  A[i][y] * B[y][j];
			}
			
			C[i][j] = aux;
			
			aux = 0;
		}
	}

    printf("\n");
    
    for(i = 0; i < M; i=i+1){
    	
		for( j = 0; j < P; j=j+1){
			
			printf("%3d ",C[i][j]);
		}
		
		printf("\n");
	}
}
