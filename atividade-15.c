//	15. Faça um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso à
// Internet, para isso você deverá ler a quantidade de horas que você utilizou. Sabe-se que você
// pagará R$ 30,00 por até 20 horas de uso (valor básico), caso você tenha usado mais de 20
// horas, então você deve acrescentar 10% do valor básico para cada hora extra utilizada

#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int main(){
	int horasUtilizadas, horasAMais;
	float valorAPagar;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a quantidade de horas que você utilizou a internet: ");
	scanf("%i", &horasUtilizadas);
	if(horasUtilizadas <= 20) valorAPagar = 30; 
	else{
		horasAMais = horasUtilizadas - 20;
		valorAPagar = 30 + (horasAMais * (0.1 * 30));
	}
	
	printf("O valor a pagar pela sua internet é R$ %.2f\n\n", valorAPagar);
	system("PAUSE");
	return 0;
}
