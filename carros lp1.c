#include<stdio.h>
#include<stdlib.h>

int i, x, y;

typedef struct carros{
	char modelo[15];
	int valor;
}veiculo;

int operacao;

int escolha(int operacao, veiculo *carro);
veiculo cadastro(veiculo carro);
int compara_value(const void *x, const void *y);
int compara_modelo();


int main(){
	
	veiculo carro[3];
	
	escolha(operacao, carro);
		
	return 0;
}

int escolha(int operacao, veiculo *carro){
	
		
	do{
		printf("\n\t\tBem-Vindo ao SUC \n\nSelecione a operacao que deseja realizar: \n\n-1 para cadastrar carros;\n-2 para listar os carros em ordem por preço;\n-0 para sair.\n\n ");
		fflush(stdin);
		scanf("%i", &operacao);
		
		switch (operacao)
		{
			case (1):
				
				cadastro(*carro);
				
		}
		
		
	}while(operacao =! 0);
	
}

veiculo cadastro(veiculo carro){
//	struct carros carro;
	
	printf("Isira o nome do modelo do carro:\n");
	fflush(stdin);
	gets(carro.modelo );
	
	printf("Isira o preço do carro:\n");
	fflush(stdin);
	scanf("%i", &carro.valor);
	
	return carro;
}
