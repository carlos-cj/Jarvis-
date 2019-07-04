#include<stdio.h>
#include<locale.h>

int main(){

	setlocale(LC_ALL, "");

	int i, j, h, k, resposta1;
	int sala[5][5];
	
	sala[5][5]=(0, 0, 0, 0, 0,
			    0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0,
				0, 0, 0, 0, 0);
	
	printf("========= BEM-VINDO ========\n\n\n");

	
	do{
		printf("\n\n>>Digite 1 para escolher onde irá se sentar;\n>>Digite 999 para anular a dioagonal principal:\n>>Digite 0 para sair;\n\n");
		fflush(stdin);
		scanf("%i", &resposta1);
	
		switch(resposta1){
	
		case 1:
			
			printf("\nDigite a linha na qual você se sentará:\n");
			fflush(stdin);
			scanf("%i", &h);
			printf("\n\nDigite a coluna na qual você se sentará:\n");
			fflush(stdin);
			scanf("%i", &k);
			printf("\n\n");
			
			for(i = 0; i < 5;  i++){
				
				for(j = 0; j < 5; j++){
					
					if(i == h && j == k){
						sala[i][j] = 1;
						
					}
					else{sala[i][j] = 0;}		
			
					
						
					printf(" %i ", sala[i][j]);
					
					
					
				}
			}
			
			
			break;
		
		case 999:
			
			printf("\n\n");
		
			for(i = 0; i < 5;  i++){
				for(j = 0; j < 5; j++){	
				
					sala[0][0] = -1;
					sala[1][1] = -1;
					sala[2][2] = -1;
					sala[3][3] = -1;
					sala[4][4] = -1;
					
					
				printf(" %i ", sala[i][j]);		
				}
			}
			
		
			break;
			
	
		
		}
		
	}	while(resposta1 != 0);
	
	
	return 0;	
}
