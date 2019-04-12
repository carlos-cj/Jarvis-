#include<stdio.h>
int main(){
	int X, Y, i;
	
	printf("Insira o valor de Y: ");
	scanf("%i", &Y);
	
	printf("Insira o valor de X: ");
	scanf("%i", &X);
	
	int V[X];
	
	for(i=0; i<X; i++){
		V[i] = (i+1) * Y;
		
		printf("\t %i \n", V[i]);
	}
	
	return 0;
}
