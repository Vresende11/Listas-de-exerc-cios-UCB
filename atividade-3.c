//Dado três valores, verificar se eles podem constituir os lados de um triângulo (triângulo é uma
//figura geométrica onde cada lado é menor do que a soma dos outros dois lados).

#include<locale.h>
#include<stdio.h>
#include <stdlib.h>


int main(){
	double n1, n2, n3;
	bool podeFormarTriangulo = true;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite 3 valores de tamanho de retas: ");
	// supondo que os valores digitados são respectivamente 2, 3, 3
	scanf("%lf%lf%lf", &n1, &n2, &n3);
	
	if(n1 == 0 || n2 == 0 || n3==0){
		printf("Não existe triângulo com um dos lados igual a 0\n\n");
		main();
	} else{
	
		if(n1 >= (n2 + n3)) podeFormarTriangulo = false; // é falso, logo o código não será executado
		if(n2 >= (n1 + n3)) podeFormarTriangulo = false; // é falso, logo o código não será executado
		if(n3 >= (n2 + n1)) podeFormarTriangulo = false; // é falso, logo o código não será executado
	
		printf("As retas cujos tamanhos você informou ");
		if(podeFormarTriangulo){ // podeFormarTriangulo = true, logo o código será executado
			printf("podem formar triângulo!\n");
			if(n1 == n2 && n2 == n3){ // falso  
				printf("O triângulo formado é do tipo: equilátero."); //código não executado
			} else if(n1 == n2 || n2 == n3 || n3 == n1){ // n2 == n3 -> v
				printf("O triângulo formado é do tipo: isósceles."); //código executado
			} else { //if ja foi encerrado, logo esse else e seu bloco não serão executados
				printf("O triângulo formado é do tipo: escaleno.");
			}
		} 
		else printf("não podem formar triângulo");
		printf("\n\n");
		system("PAUSE");
	
	}
	
	return 0;
}
