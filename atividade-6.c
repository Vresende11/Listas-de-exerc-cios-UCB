// 6. Escrever um algoritmo que determine se um n�mero inteiro qualquer � PAR ou IMPAR.
#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int inteiro;
	printf("Digite um n�mero inteiro qualquer: ");
	scanf("%i", &inteiro);
	
	if(inteiro % 2 == 0) printf("O n�mero � par");
	else printf("O n�mero � impar");
	
	printf("\n\n");
	system("PAUSE");
	
	return 0;
}
