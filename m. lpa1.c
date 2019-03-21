#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int ano;
	int mes;
	int dia;
	
	printf("\n Em que ano vc nasceu? ");
	scanf("%i", &ano);
	
	printf("\n Em que mes vc nasceu? ");
	scanf("%i", &mes);
	
	printf("\n Em que dia vc nasceu? ");
	scanf("%i", &dia);
	
	if(ano >= 1900 && ano <= 2018 && mes >= 01 && mes <= 12 && dia >= 01 && dia <= 31 ){
		printf("Essa data e aceitavel");
		
	}	else if(ano == 2019 && mes >= 01 && mes <= 02 && dia >= 01 && dia <= 31){
			printf("Essa data e aceitavel");
		}
		
		else if(ano == 2019 && mes == 03 && dia >= 01 && dia <= 21){
			printf("Essa data e aceitavel");
		}

	 
	
	else{
		printf("Essa data nao e aceitavel");
}
	
	return 0;
}
