//Ler dois valores numéricos e apresentar a diferença do maior valor pelo menor.
#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int main(){
	int n1, n2, diferenca;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite dois valores numéricos:\n");
	scanf("%i%i", &n1, &n2);
	
	diferenca = n1 - n2;
	
	if(diferenca < 0){
		diferenca = diferenca * -1;
	}
	
	printf("A diferença entre os números do maior pro menor é: %i\n\n", diferenca);
	system("PAUSE");
	return 0;
}
