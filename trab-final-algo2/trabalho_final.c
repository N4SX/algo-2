#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void troca(int *c1, int *c2){
	int aux;
	
	aux=*c1;
	*c1=*c2;
	*c2=aux;
}
void selecao(int *vet, int tamanho){
		int min,i,j;
		for(i=0;i<tamanho-1;i++){
			min=i;
			for(j=i+1;j<tamanho;j++){
				if(vet[j]<vet[min]){
					min=j;
				}
			}
			troca(&vet[i],&vet[min]);
		}
}

void selecaoI(int *vet, int tamanho){
		int max,i,j;
		for(i=0;i<tamanho-1;i++){
			max=i;
			for(j=i+1;j<tamanho;j++){
				if(vet[j]>vet[max]){
					max=j;
				}
			}
			troca(&vet[i],&vet[max]);
		}
}

void preenche(int *vet, FILE *fileclose, int tamanho){
	
	int i;
	for(i=0;i<tamanho;i++){
		fprintf(fileclose, "%d\n", vet[i]); //preenche no arquivo de saida.txt
	}
}

int main(int argc, char *argv[]){

	if(argc==3){	
		int tamanho, valores, i, pares = 0, impares = 0; 
		
		
		char entrada[20], saida[20]; 
		strcpy(entrada,argv[1]);
		strcpy(saida,argv[2]);
		
		FILE *fileopen = fopen(entrada, "r");
		
		if(fileopen == NULL){
			printf("Erro na abertura do arquivo.\n");
			exit(1);
		}
		
			fscanf(fileopen, "%d", &tamanho); //coloca na variavel a quantidade de valores
			
			int vetP[tamanho], vetI[tamanho];
			for(i=0;i<tamanho;i++){
				
				fscanf(fileopen, "%d", &valores); //faz a leitura do arquivo txt
				
				if(valores > 0){
					if(valores % 2 == 0){
						vetP[pares] = valores;
						pares++;
					}else{
						vetI[impares] = valores;
						impares++;
					}
				}
			}
		
		selecao(vetP, pares);
		selecaoI(vetI,impares);
		
		FILE *fileclose = fopen(saida, "w");
		if(fileclose==NULL){
			
			printf("Erro na abertura do arquivo.\n");
		}else{
			preenche(vetP, fileclose, pares);
			preenche(vetI, fileclose, impares);
			
			fclose(fileopen);
			fclose(fileclose);
		}
	}else{
		printf("sem argumentos");
	}
		
	return 0;
}
