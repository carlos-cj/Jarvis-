#include <stdio.h>
#include <stdlib.h>

int main() {
	double n1, n2; 
	int controle = 1; 
	int quociente = 0;
	
	printf("digite dois numeros: ");
	scanf("%d%d", &n1, &n2);
	
	while(controle == 1) {
		n1 = n1 - n2;
		quociente = quociente + 1;
		
		if(n1 - n2 < 0) {
			controle = 0;
		}
		
	}
	
	printf("\n O quociente e: %i", quociente);
	printf("\n O resto e de: %d\n", n1);
	
	system("PAUSE");
	return 0;
}
