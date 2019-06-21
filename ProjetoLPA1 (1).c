#include <stdio.h>
#include <stdlib.h>
#define String 5

int main() {
	
	int i;
	int alternativa1, menu1 = 0, contadorRegistro = 0, validacaoLogin = 0;
	char senhaGeral[String], loginGeral[String];
	char senhaUsuario, loginUsuario;
	
	do {
		printf(">>>>>>>>>>>>>>>>>> BEM VINDO AO PROGRAMA <<<<<<<<<<<<<<<<<<<<\n");
		printf("> (1) - Registrar                                           <\n");
		printf("> (2) - Logar                                               <\n");
		printf("> (0) - Sair                                                <\n");
		printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
		
		printf("\nDigite a alternativa: ");
		scanf("%i", &alternativa1);
		
		while(alternativa1 < 0 || alternativa1 > 2) {
			printf("\nVocê digitou uma opção inválida. Digite uma das opções acima: ");
			scanf("%i", &alternativa1);
		}
		
		
		switch (alternativa1) {
			
			case 1:
				
				printf("\nDigite seu login: ");
				fflush(stdin);
				scanf("%c", &loginGeral[contadorRegistro]);
				
				printf("\nDigite sua senha: ");
				fflush(stdin);
				scanf("%c", &senhaGeral[contadorRegistro]);
				
				contadorRegistro++;
				
				break;
	
			case 2:
				
				printf("\nDigite seu login: ");
				fflush(stdin);
				scanf("%c", &loginUsuario);
				
				printf("\nDigite sua senha: ");
				fflush(stdin);
				scanf("%i", &senhaUsuario);
				
				for(i = 0; i < String; i++) {
					
					if(loginGeral[i] == loginUsuario && senhaGeral[i] == senhaUsuario) {
						
						printf("\nLogin e senha corretos! ");
						
						validacaoLogin = 1;
						
					} 
					
				}
				
				menu = 1;
				
				break;
				
			case 0:
				
				printf("\nPrograma Finalizado!");
				menu1 = 1;
				
				break;
				
		}
		
	} while (menu1 != 1);
	
	system("PAUSE");
	return 0;
}
