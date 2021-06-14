// 6. Escrever um algoritmo que determine se um número inteiro qualquer é PAR ou IMPAR.
#include<stdio.h>
#include <stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int inteiro;
	printf("Digite um número inteiro qualquer: ");
	scanf("%i", &inteiro);
	
	if(inteiro % 2 == 0) printf("O número é par");
	else printf("O número é impar");
	
	printf("\n\n");
	system("PAUSE");
	
	return 0;
}
