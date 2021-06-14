//2. Efetuar a leitura de um número e apresentá-lo como o seu módulo (somente seu valor
//absoluto) elaborando os cálculos matemáticos para isso

#include <stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	int n1, modulo;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um número para que eu calcule o módulo dele\n");
	printf("Número: ");
	scanf("%i", &n1);
	
	if(n1 < 0){
		modulo = n1 * -1;
	} else {
		modulo = n1;
	}
	
	printf("O módulo do número que você digitou é %i\n\n", modulo);
	system("PAUSE");
	return 0;
}
