#include<stdio.h>
#include<locale.h>
#include<string.h>

struct user{
	char nome[50];
	int idade;
	char sexo[10];
	float altura;
	
};

void conclusao();

int main(){
	struct user User;
	
	setlocale(LC_ALL, "");
	
	printf("===== BEM - VINDO =====");
	printf("\n\nPara iniciarmos seu cadastro, preencha as informações a seguir:");
	
	printf("\n\n\nInsira seu nome:\n-");
	gets(User.nome);
	
	printf("\n\nInsira sua idade:\n-");
	fflush(stdin);
	scanf("%i", &User.idade);
	
	printf("\n\nInsira seu sexo:\n-");
	fflush(stdin);
	gets(User.sexo);
	
	printf("\n\nInsira sua altura:\n-");
	fflush(stdin);
	scanf("%f", &User.altura);
	
	
	conclusao(User);
	
}

void conclusao(struct user User){
	
	printf("\n\n\nSeu cadastro foi concluido.\nAbaixo estão as suas informações:\n\n");
	
	printf("\nNome: %s", User.nome);
	printf("\nIdade: %i", User.idade);	
	printf("\nSexo: %s", User.sexo);	
	printf("\nAltura: %.2f", User.altura);

}
