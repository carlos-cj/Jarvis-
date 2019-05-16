#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define TAM 200

int main(){
	
	int compara1, compara2;
	
	char s_1[TAM] = {'Q','u','a','l',' ','o',' ','m','e','l','h','o','r',' ','t','i','m','e',' '};
	char s_2[TAM] = {'d','o',' ','B','r','a','s','i','l','?'};
	char s_3[TAM];
	char s_4[TAM] = {'A','c','e','r','t','o','u',' '};
	char s_5[TAM] = {'M','i','z','e','r','a','v','i','h','!'};
	char s_6[TAM] = {'E','r','o','o','o','o','u','!'};
	char s_7[TAM] = {'F','l','a','m','e','n','g','o'};
	char s_8[TAM] = {'S','p','o','r','t'};
	char s_9[TAM] = {'8','7',' ','e',' ','d','o',' ','M','e','n','g','o','!'};


	strcat(s_1, s_2);
	strcat(s_4, s_5);

	printf("\n%s \n\n", s_1);

	gets(s_3);
	
	compara1 = strcmp(s_3, s_7);
	
	compara2 = strcmp(s_3, s_8);
	
	if(compara1 == 0){
		
		printf("\n%s \n", s_4);
		
	}
	else{
		
		printf("\n%s \n", s_6);
		
	}
	
	if(compara2 == 0){
		
		printf("%s", s_9);
		
	}
	
	return 0;
}
