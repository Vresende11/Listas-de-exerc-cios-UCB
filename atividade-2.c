#include <stdio.h> 
#include <math.h>//biblioteca para entrada, saida, formulas matematica e funções
#include <stdlib.h>

int main(){ //função principal do programa
  
    float area, raio;//variavel para numero reais
    //sistema para recebe informação do usuario
	printf("digite o raio da circuferencia: ");
	scanf("%f", &raio);
	//formula para calcular area de uma circuferencia
	area = M_PI * raio * raio;
	//mostra para o usuario o resutado da equação
	printf ("A area do circulo : %f\n",area);
	
	system("pause");	
	return 0;
	
}
