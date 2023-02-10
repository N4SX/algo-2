#include <stdio.h>

#define MAX_REG 1000
#define FILE_NAME "dados.bin"

void cadastrar();
void visualizar();
void remover_registro();
void remover_multiplos_registros();

struct celular{
	
	int codigo;
	char descricao[30];
	float preco;	
};

int main(){
	
	printf(	"1-Cadastrar\n"
			"2-Visualizar\n"
			"3-Remover registro\n"
			"4-Remover multiplos registros\n"
			"5-Finalizar\n"
	);
	
	int modulo;
	int rodando = 1;
	
	while(rodando){
		
		printf("Informe o modulo desejado: \n");
		fflush(stdin);
		scanf("%d", &modulo);
		
		switch(modulo){
			
			case 1:
				cadastrar();
				printf("\n");
				break;
			case 2:
				visualizar();
				printf("\n");
				break;
			case 3:
				remover_registro();
				printf("\n");
				break;
			case 4:
				remover_multiplos_registros();
				printf("\n");
				break;
			case 5:
				rodando = 0;
				break;
			default:
				break;
		}
	}
	
	return 0;
}

void cadastrar(){
	
	FILE* arquivo = fopen(FILE_NAME, "a+b");
	
	struct celular meu_celular;
	struct celular leitura;
	
    printf("Codigo: ");
	fflush(stdin);
    scanf("%d", &meu_celular.codigo);
    
    while(fread(&leitura, sizeof(struct celular), 1, arquivo) > 0){
    	
        if(leitura.codigo == meu_celular.codigo){
            fclose(arquivo);
            printf("Codigo ja foi cadastrado!\n");
            return;
        }
    }
    
    printf("Descricao: ");
	fflush(stdin);
	scanf("%[^\n]s", meu_celular.descricao);
    
    printf("Preco: ");
	fflush(stdin);
    scanf("%f", &meu_celular.preco);
    
    fwrite(&meu_celular, sizeof(struct celular), 1, arquivo);
    fclose(arquivo);
    return;
}

void visualizar(){
	
	FILE* arquivo = fopen(FILE_NAME, "rb");
	struct celular leitura;
	
	while(fread(&leitura, sizeof(struct celular), 1, arquivo) > 0){
		
        printf("%d, %s, R$%.2f.\n",leitura.codigo, leitura.descricao, leitura.preco);
    }
    
    fclose(arquivo);
}

void remover_registro(){
	
	FILE* arquivo = fopen(FILE_NAME, "rb");
	FILE* temp = fopen("temp.bin", "a+b");
	
	struct celular leitura;
	
	int codigo;
	printf("Codigo para remover: ");
	fflush(stdin);
    scanf("%d", &codigo);
	
	while(fread(&leitura, sizeof(struct celular), 1, arquivo) > 0){
		
        if(leitura.codigo != codigo){
        	
            fwrite(&leitura, sizeof(struct celular), 1, temp);
        }
    }
	
	fclose(arquivo);
	fclose(temp);
	
	remove(FILE_NAME);
	rename("temp.bin", FILE_NAME);
}

void remover_multiplos_registros(){
	
	FILE* arquivo = fopen(FILE_NAME, "rb");
	FILE* temp = fopen("temp.bin", "a+b");
	
	struct celular leitura;
	
	float preco;
	printf("Preco para remover: ");
	fflush(stdin);
    scanf("%f", &preco);
    
    while(fread(&leitura, sizeof(struct celular), 1, arquivo) > 0){
    	
        if(leitura.preco >= preco){
        	
            fwrite(&leitura, sizeof(struct celular), 1, temp);
        }
    }
	
	fclose(arquivo);
	fclose(temp);
	
	remove(FILE_NAME);
	
	rename("temp.bin", FILE_NAME);
}