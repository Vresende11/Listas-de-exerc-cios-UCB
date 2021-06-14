//4. Desenvolver um algoritmo que leia o nome e o sexo de uma pessoa e apresente como saída
// uma das seguintes mensagens: “Ilmo. Sr.”, para o sexo masculino ou “Ilma. Sra.” para o sexo
// feminino, acrescentando o nome em seguida. Observe o exemplo de um resultado:
// Ilma Sra. Ana Rita

#include <stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	char nome[40];
	char sexo;
	double altura, pesoIdeal;
	
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	fflush(stdin);
	
	printf("Digite seu sexo(m -> masculino, f -> feminino): ");
	scanf("%c", &sexo);
	fflush(stdin);
	
	printf("Digite sua altura: ");
	scanf("%lf", &altura);
	fflush(stdin);

	setlocale(LC_ALL, "Portuguese");

	switch(sexo){
		case 'm': 
			pesoIdeal = ((72.5 * altura) - 58);		
			printf("Ilmo. Sr. %s \n", nome); 
			printf("Seu peso ideal é %.2f", pesoIdeal);
			break;
		case 'f': 
			pesoIdeal = (62.1 * altura) - 44.7;
			printf("Ilma. Sra. %s \n", nome);
			printf("Seu peso ideal é %.2f", pesoIdeal);
			break;
		default:  printf("Valor do sexo digitado incorretamente.");
	}
	
	printf("\n\n");
	system("PAUSE");
	
	return 0;
}
