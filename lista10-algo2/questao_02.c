#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

typedef struct{
	
	int cod;
	char car[20];
	float val;
	
}Registro;

void formatacao(){
	
	int i;
	Registro reg={0,"",0.0};
	FILE *file;
	
	file=fopen("dados.dat", "wb");
    for ( i = 1; i <= 1000; i=i+1 ) {
    	
        fwrite( &reg, sizeof(Registro), 1, file);
        
    }
    
    fclose(file);
}

void escrita(){
	
	Registro reg={0,"",0.0};
	FILE *file;
	file = fopen("dados.dat", "rb+");
	
	printf("Digite o codigo de locacao (Digite 0 para o fim da entrada)\n");
	
	scanf("%d", &reg.cod);
	
	while(reg.cod!=0){
		
		printf("Digite o nome do veiculo e o valor de locacao\n");
		scanf("%s%f", reg.car, &reg.val);
		
		fseek(file, ( reg.cod - 1 ) * sizeof( Registro ), SEEK_SET );
		fwrite(&reg, sizeof(Registro), 1, file);
		
		printf("Digite o codigo de locacao (Digite 0 para o fim da entrada)\n");
	    scanf("%d", &reg.cod);
	}
		fclose(file);
		
}

void leitura(){
	
	FILE *file;
	
	Registro reg={0,"",0.0};
	file = fopen("dados.dat", "rb");
	
	while(fread(&reg, sizeof(Registro), 1, file)){
		
		if(reg.cod!=0){
			
			printf("%d %s %.2f\n", reg.cod, reg.car, reg.val);
			
		}	
	}
	
	fclose(file);
}

void busca(){
	
	FILE *file;
	
	Registro reg={0,"",0.0};
	file = fopen("dados.dat", "rb");
	
	printf("Digite o codigo de locacao para a busca\n");
	scanf("%d", &reg.cod);
	
	fseek(file, ( reg.cod - 1 ) * sizeof( Registro ), SEEK_SET );
	fread(&reg, sizeof(Registro), 1, file);
	
	if(reg.cod!=0){
		
		printf("%d %s %.2f\n", reg.cod, reg.car, reg.val);
		
	}
}

int main(){
	
    Registro t;
    int op, i;
    char nome[20];
    char fnome[10];
    
    printf("Sistema de locacao \n");
    
    do{
    	printf("Digite o numero da opcao (1-formatar, 2-escrever, 3-ler, 4-buscar, 0-finalizar): \n");
    	scanf("%d", &op);
    	
		switch(op){
			
			case 1:
			formatacao();
			break;
			
		case 2:
			escrita(t);
			break;
			
		case 3:
			leitura(t);
			break;
			
		case 4:
			busca(t);
			break;
			
			default:
			break;
	}
		
	}while(op!=0);

    return 0;
}
