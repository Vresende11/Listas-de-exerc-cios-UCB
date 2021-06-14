//	17. Voc� tem um desejo incontrol�vel de descobrir quantos dias voc� j� viveu em toda a sua vida,
// ent�o fa�a um algoritmo que leia o ano de nascimento de uma pessoa e o ano atual, depois
// calcule e escreva o nome e o n�mero de dias, aproximados, j� vividos por essa pessoa.

#include<stdio.h>
#include<locale.h>
#include<time.h>
#include <stdlib.h>

int main(){
	int anoNascimento, mesNascimento, diaNascimento, diasVividos;
	
	setlocale(LC_ALL, "Portuguese");
	
	//nessa parte em espec�fico eu mecho com uma biblioteca chamada time do C para conseguir o hor�rio atual.
	time_t t = time(NULL);
  	struct tm tm = *localtime(&t);
  	int anoAtual = tm.tm_year + 1900;
	int mesAtual = tm.tm_mon;
	int diaAtual = tm.tm_mday;
	  	
	printf("Se voc� tem um desejo incontrol�vel de saber quantos dias voc� j� viveu voc� est� no lugar certo!!\n\n");
	printf("Digite seu ano de nascimento: ");
	scanf("%i", &anoNascimento);
	printf("Digite seu m�s de nascimento: ");
	scanf("%i", &mesNascimento);
	printf("Digite o dia que voc� nasceu: ");
	scanf("%i", &diaNascimento);
	

	diasVividos = ((anoAtual - anoNascimento) * 365) + ((mesAtual-1) * 30) + diaAtual + ((anoAtual - anoNascimento) * 3);
	diasVividos = diasVividos - (mesNascimento * 30 + diaNascimento );
	
	printf("Voc� viveu aproximadamente %d dias\n\n", diasVividos);
	system("PAUSE");
	
	return 0;
}
