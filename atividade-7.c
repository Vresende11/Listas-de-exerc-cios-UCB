//Ler dois valores num�ricos e apresentar a diferen�a do maior valor pelo menor.
#include<stdio.h>
#include<locale.h>
#include <stdlib.h>

int main(){
	int n1, n2, diferenca;
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite dois valores num�ricos:\n");
	scanf("%i%i", &n1, &n2);
	
	diferenca = n1 - n2;
	
	if(diferenca < 0){
		diferenca = diferenca * -1;
	}
	
	printf("A diferen�a entre os n�meros do maior pro menor �: %i\n\n", diferenca);
	system("PAUSE");
	return 0;
}
