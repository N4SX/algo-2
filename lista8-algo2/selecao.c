include<stdio.h>

void selecao( struct item *v, int n ){
	
	int i, j, min;
	
	for( i=o; i < n - 1; i++){
		
		min = i;
		
		for(j=i+1; j < n; j++ ){
			
			if(v[j]. chave < v[min]. chave)
			
			min = j;
			
		}
		
		troca(v[i], v[min]);
		
	}
}
