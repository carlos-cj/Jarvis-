#include<stdio.h>
int main(){
	
	int matricula[10], idx, tamanho, conferir, aux = 0;
	tamanho = 10;
	
	for(idx=0; idx< tamanho; idx++){
		printf("Insira a matricula %i : \n", idx);
		scanf("%i", &matricula[idx]);
	}
	
	printf("\n \n \n Confira sua matricula: \n");
	scanf("%i", &conferir);
	
	for(idx = 0; idx < tamanho; idx ++ ){
		if(conferir == matricula[idx]){
			printf("A matricula: %i, foi encontrada no indice: %i \n", conferir, idx );
			aux = 1;
		}
	}
	if(aux == 0){
		printf("\n \n Matricula nao encontrada!");
	}
	
	return 0;

}
