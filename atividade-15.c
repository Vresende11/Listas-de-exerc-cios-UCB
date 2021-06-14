//	15. Fa�a um algoritmo que calcule e escreva o valor a ser pago a sua provedora de acesso �
// Internet, para isso voc� dever� ler a quantidade de horas que voc� utilizou. Sabe-se que voc�
// pagar� R$ 30,00 por at� 20 horas de uso (valor b�sico), caso voc� tenha usado mais de 20
// horas, ent�o voc� deve acrescentar 10% do valor b�sico para cada hora extra utilizada

#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int main(){
	int horasUtilizadas, horasAMais;
	float valorAPagar;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite a quantidade de horas que voc� utilizou a internet: ");
	scanf("%i", &horasUtilizadas);
	if(horasUtilizadas <= 20) valorAPagar = 30; 
	else{
		horasAMais = horasUtilizadas - 20;
		valorAPagar = 30 + (horasAMais * (0.1 * 30));
	}
	
	printf("O valor a pagar pela sua internet � R$ %.2f\n\n", valorAPagar);
	system("PAUSE");
	return 0;
}
