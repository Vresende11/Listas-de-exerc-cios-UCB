//	16. Fazer um algoritmo que leia o nome e a altura de três pessoas, determine e apresente o nome
// e a altura da menor delas
#include<stdio.h>
#include<locale.h>
#include <stdlib.h>


int main(){
	char nome1[40], nome2[40], nome3[40];
	float altura1, altura2, altura3;

	printf("Digite os nomes das 3 pessoas: ");
	scanf("%s%s%s", &nome1, &nome2, &nome3);
	printf("Digite as alturas das 3 pessoas (respectivamente): ");
	scanf(" %f %f %f", &altura1, &altura2, &altura3);
	
	setlocale(LC_ALL, "Portuguese");
	printf("A pessoa mais alta é: ");
	if(altura1 > altura2 && altura1 > altura3){
		printf("%s com %.2f de altura", nome1, altura1);
		} else if(altura2 > altura1 && altura2 > altura3){
			printf("%s com %.2f de altura", nome2, altura2);
		} else {
			printf("%s com %.2f de altura", nome2, altura2);
		}
	printf("\n\n");
	system("PAUSE");
	return 0;
}
