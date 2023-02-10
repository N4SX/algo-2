#include <stdio.h>

void insercao( struct item *v, int n){
	
	int i, j;
	
	struct item aux;
	
	for (i = i; i < n; n++ ){
		
		aux =  v[i];
		
		j =i=1;
		
		while ((j >=0 && (aux.chave< v[j].chave) )){
			
			v[j+1 ] - v[j];
			
			j--;
			
		}
		
		v[j+1] = aux;
		
	}
}
