#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int continuar;
	int pontuacao = 0;
	
	printf(" \t ==== Bem-vindo ao quiz sobre futebol ==== \n\n ");
	
	pontuacao += pergunta_1();
	pontuacao += pergunta_2();
	pontuacao += pergunta_3();
	pontuacao += pergunta_4();
	pontuacao += pergunta_5();
	
	printf("\n\n Sua pontuacao foi: %d \n\n", pontuacao);
		

	return 0;
}


int pergunta_1(){
	
	int resposta;
	
	printf("\n 1)  Qual o maior campeao brasileiro da era dos pontos corridos? \n (1) - Palmeiras; \n (2) - Sao Paulo; \n (3) - Corinthians; \n (4) - Flamengo; \n\n Resposta: ");
	scanf("%d", &resposta);
	
	if(resposta == 3){
		
		printf("\n Correto, vc somou 10 pontos \n");
		
		return 10;
	} else{
	
		printf("\n Erooooooooooooou!!! \n");
		
		return 0;
	}
}

int pergunta_2(){
	
	int resposta;
	
	printf("\n 2)  Qual o maior campeao da UCL ?  \n (1) - Real Madrid; \n (2) - Barcelona; \n (3) - Milan; \n (4) - Man City; \n\n Resposta: \n ");
	scanf("%d", &resposta);
	
	if(resposta == 1){
		
		printf("\n Correto, vc somou 10 pontos \n");
		
		return 10;
	} else{
	
		printf("\n Erooooooooooooou!!! \n");
		
		return 0;
	}
	
}

int pergunta_3(){
	
	int resposta;
	
	printf("\n 3)  Qual o nome dado ao grupo dos maiores e mais tradicionais clubes do Brasil?  \n (1) - G10; \n (2) - OS GIGANTES; \n (3) - TOP15; \n (4) - G12; \n\n Resposta: \n ");
	scanf("%d", &resposta);
	
	if(resposta == 4){
		
		printf("\n Correto, vc somou 10 pontos \n");
		
		return 10;
	} else{
	
		printf("\n Erooooooooooooou!!! \n");
		
		return 0;
	}
	
}

int pergunta_4(){
	
	int resposta;
	
	printf("\n 4)  Qual a liga nacional de mais alto nivel do mundo ?  \n (1) - La Liga; \n (2) - Brasileirao; \n (3) - Serie A; \n (4) - Premier League; \n\n Resposta: \n ");
	scanf("%d", &resposta);
	
	if(resposta == 4){
		
		printf("\n Correto, vc somou 10 pontos \n");
		
		return 10;
	} else{
	
		printf("\n Erooooooooooooou!!! \n");
		
		return 0;
	}
	
}

int pergunta_5(){
	
	int resposta;
	
	printf("\n 5)  Qual a segunda maior competicao continental do mundo? \n (1) - Libertadores da America; \n (2) - Liga dos Campeoes da Concacaf; \n (3) - AFC Champions; \n (4) - Liga dos campeoes da CAF; \n\n Resposta: \n ");
	scanf("%d", &resposta);
	
	if(resposta == 1){
		
		printf("\n Correto, vc somou 10 pontos \n");
		
		return 10;
	} else{
	
		printf("\n Erooooooooooooou!!! \n");
		
		return 0;
	}
	
}
