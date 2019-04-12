#include<stdio.h>
int main(){
	
	int A[5], B[8], i, t, comum;
	
	for(i=0; i < 5; i++){
		printf("Insira um valor para A: ");
		scanf("%i", &A[i]);
		
	}
	
	for(t=0; t < 8; t++){
		printf("Insira um valor para B: ");
		scanf("%i", &B[t]);	
}
	
	
	for(i=0; i < 5; i++){
		for(t=0; t < 8; t++){
			if(A[i]==B[t]){
			printf("\n A e B tem %i em comum. ", A[i]);
		}
		}
	}
	
	return 0;
}
