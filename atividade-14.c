// 14. Fazer um algoritmo que leia tr�s valores, determine e imprima o maior deles.

#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	int valor1, valor2, valor3, maiorValor;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite 3 valores: ");
	scanf("%i%i%i", &valor1, &valor2, &valor3);
	
	if(valor1 == valor2 && valor2 == valor3){
		printf("Os valores passados s�o iguais...");
	} else {
		
		if(valor1 >= valor2 && valor1 >= valor3) maiorValor = valor1;
		else if(valor2 >= valor3 && valor2 >= valor1) maiorValor = valor2;
		else if(valor3 >= valor2  && valor3 >= valor1) maiorValor = valor3;
		printf("O maior valor que voc� passou �: %i\n\n", maiorValor);
	}
	
	system("PAUSE");
	return 0;
}
