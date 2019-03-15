#include <stdio.h>
int main(){
	
	int idade;
	char tatuagem;
	char ano;
	
	printf("qual sua idade? ");
	scanf("%d", &idade);
	
	if(idade >= 18 && idade < 67){
		printf("\n possui tatuagem? (s ou n) ");
		fflush(stdin);
		scanf("%c", &tatuagem);
		
		if(tatuagem == 's'){
		printf("\n Ha mais, ou menos de um ano? (M ou m)");
		fflush(stdin);
		scanf("%c", &ano);
		
		
		if(ano == 'M'){
			printf("\n Voce esta apto a doar sangue. Muito obrigado pela iniciativa, se possivel compartilhe essa ideia :3");
		}
	}
	    else if(tatuagem == 'n'){
	    	printf("\n Voce esta apto a doar sangue. Muito obrigado pela iniciativa, se possivel compartilhe essa ideia :3");
		}
	
	}
	else{
	printf("\n vc nao pode doar sangue, mas obrigado pela iniciativa, se possivel, compartilhe essa ideia :D");
	}
	
	return 0;
}
