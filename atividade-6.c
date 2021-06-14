#include <stdio.h>
#include <stdlib.h>

int main(){
	/*variaveis para serem declaradas*/
	float notaA, notaB, notaF;
	/*campo para digitar o valor da primeira nota*/
	printf("Digite a nota da prova A: ");
	scanf("%f", &notaA);
	/*campo para digitar o valor da segunda nota*/
	printf("Digite a nota da prova B: ");
	scanf("%f", &notaB);
	/*formula para achar media ponderada com peso 3.5 e 7.5*/
	notaF = ((notaA * 3.5) + (notaB * 7.5)) / 11 ;
	/*mostra a media na tela*/
	printf("\nA media das notas: %5.2f\n", notaF);
	system("pause");
	return 0;
}
