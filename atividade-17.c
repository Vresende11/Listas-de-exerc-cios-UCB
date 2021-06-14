//	17. Você tem um desejo incontrolável de descobrir quantos dias você já viveu em toda a sua vida,
// então faça um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois
// calcule e escreva o nome e o número de dias, aproximados, já vividos por essa pessoa.

#include<stdio.h>
#include<locale.h>
#include<time.h>
#include <stdlib.h>

int main(){
	int anoNascimento, mesNascimento, diaNascimento, diasVividos;
	
	setlocale(LC_ALL, "Portuguese");
	
	//nessa parte em específico eu mecho com uma biblioteca chamada time do C para conseguir o horário atual.
	time_t t = time(NULL);
  	struct tm tm = *localtime(&t);
  	int anoAtual = tm.tm_year + 1900;
	int mesAtual = tm.tm_mon;
	int diaAtual = tm.tm_mday;
	  	
	printf("Se você tem um desejo incontrolável de saber quantos dias você já viveu você está no lugar certo!!\n\n");
	printf("Digite seu ano de nascimento: ");
	scanf("%i", &anoNascimento);
	printf("Digite seu mês de nascimento: ");
	scanf("%i", &mesNascimento);
	printf("Digite o dia que você nasceu: ");
	scanf("%i", &diaNascimento);
	

	diasVividos = ((anoAtual - anoNascimento) * 365) + ((mesAtual-1) * 30) + diaAtual + ((anoAtual - anoNascimento) * 3);
	diasVividos = diasVividos - (mesNascimento * 30 + diaNascimento );
	
	printf("Você viveu aproximadamente %d dias\n\n", diasVividos);
	system("PAUSE");
	
	return 0;
}
