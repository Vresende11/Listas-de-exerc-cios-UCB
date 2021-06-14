//1. Construa um algoritmo que a partir da leitura da velocidade e placa do carro, avise ao
 //motorista somente se ele será multado, quando estiver trafegando no Eixo Rodoviário (limite
 //de 80 km/h).
 

#include <stdlib.h>
#include<stdio.h>
#include<locale.h>

int main(){
	int velocidadeDoCarro;
	char placaDoCarro[7];
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite a placa do seu carro (7 caracteres): ");
	scanf("%s", placaDoCarro);
	
	printf("Digite a velocidade do carro (em km/h): ");
	scanf("%i", &velocidadeDoCarro);
	
	printf("O carro com a placa %s ", placaDoCarro);
	if(velocidadeDoCarro <= 80){
		printf("não será multado");
	} else {
		printf("será multado!");
	}
	printf("\n\n");
	system("PAUSE");	
} 
