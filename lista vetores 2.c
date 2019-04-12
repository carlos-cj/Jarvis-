#include<stdio.h>
int main(){
	int A[10], B[10], idx;
	
	for(idx=0; idx < 10; idx++){
		printf("Insira o correspondente %i de A: ", idx);
		scanf("%i", &A[idx]);
			
	}
	
	for(idx=0; idx < 10; idx++){
		if(idx%2 == 0){
			B[idx] = A[idx] / 2;
		}
		
		else{	B[idx] = A[idx] * 3;
		}
		
	}
	
	for(idx=0; idx < 10; idx++){
		printf("Correspondente %i de A: %i \t", idx, A[idx]);
		printf("\t Correspondente %i de B: %i \n", idx, B[idx]);	

}
	
	return 0;
}
