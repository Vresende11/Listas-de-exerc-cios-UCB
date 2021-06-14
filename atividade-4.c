#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	/*Variaveis para indica dividendo,divisor,resultdo e resto*/
	int number1, number2, result, rest;
	/*printf e scanf para ser digitado um dividendo*/ 
	printf("Digite um dividendo: ");
	scanf("%d", &number1);
	/*printf e scanf para ser digitado um divisor*/ 
	printf("Digite divisor: ");
	scanf("%d", &number2);
	/*calculo para achar o resultdo e printf para mostra a tela para o usuario*/
	result = number1 / number2;
	printf("\nO resultado: %d", result);
	/*calculo para achar o resto e printf para mostra a tela para o usuario*/
	rest = number1 % number2;
	printf("\nO resto: %d\n", rest);
	/*system pause pra para o debuging*/ 
	system("pause");
	/*return 0 para retorna o programa para o inicio no caso 0*/ 
	return 0;
	
}
