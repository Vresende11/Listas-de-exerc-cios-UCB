//2. Efetuar a leitura de um n�mero e apresent�-lo como o seu m�dulo (somente seu valor
//absoluto) elaborando os c�lculos matem�ticos para isso

#include <stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	int n1, modulo;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite um n�mero para que eu calcule o m�dulo dele\n");
	printf("N�mero: ");
	scanf("%i", &n1);
	
	if(n1 < 0){
		modulo = n1 * -1;
	} else {
		modulo = n1;
	}
	
	printf("O m�dulo do n�mero que voc� digitou � %i\n\n", modulo);
	system("PAUSE");
	return 0;
}
