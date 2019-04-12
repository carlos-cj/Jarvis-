#include<stdio.h>
int main(){
	
	int valor[10], soma=0, idx;
	
	for(idx=0; idx<10; idx++){
		printf("Digite o valor: ");
		scanf("%i", &valor[idx]);
		
		//soma = valor[0] + valor[1] + valor[2] + valor[3] + valor[4] + valor[5] + valor[6] + valor[7] + valor[8] + valor[9];
		
		soma=soma+valor[idx];
		
	}

		
	printf("\n A soma dos valores e: %i \n", soma);
	
	return 0;
}
