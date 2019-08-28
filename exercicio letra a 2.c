#include<stdio.h>

int main(){
	int n;
	int a;
	int ctd = 0;
	int i;
	int r[i];
	
	printf("Insira o numero decimal a ser convertido em binario:\n\n");
	fflush(stdin);
	scanf("%i", &n);
	
	printf("\n");
	

while(n >= 1){	
			
		ctd++;
		
		n = n/2;
	}
		
	a = ctd;

//	printf("Insira o numero decimal novamente:");
//	fflush(stdin);
//	scanf("%i", &n);	
	
//	printf("\n");
	

	for(i = a; i >= 1; i--){
		
		r[i] = n%2;		
				
		printf("%i", r[i]);
		
		n = n/2;		
	}
	
	
	return 0;
}


