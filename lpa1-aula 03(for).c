#include<stdio.h>

int main(){
	
	int i = 1;
	int n;
	
	printf("Digite um numero entre 0 e 100: \n");
	scanf("%i", &n);
	
	for( ;i <= n;i = i + 2){
		printf("%i, ", i);
	}
	
	
	return 0;
}
