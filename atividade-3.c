//Dado tr�s valores, verificar se eles podem constituir os lados de um tri�ngulo (tri�ngulo � uma
//figura geom�trica onde cada lado � menor do que a soma dos outros dois lados).

#include<locale.h>
#include<stdio.h>
#include <stdlib.h>


int main(){
	double n1, n2, n3;
	bool podeFormarTriangulo = true;
	
	setlocale(LC_ALL, "Portuguese");
	printf("Digite 3 valores de tamanho de retas: ");
	// supondo que os valores digitados s�o respectivamente 2, 3, 3
	scanf("%lf%lf%lf", &n1, &n2, &n3);
	
	if(n1 == 0 || n2 == 0 || n3==0){
		printf("N�o existe tri�ngulo com um dos lados igual a 0\n\n");
		main();
	} else{
	
		if(n1 >= (n2 + n3)) podeFormarTriangulo = false; // � falso, logo o c�digo n�o ser� executado
		if(n2 >= (n1 + n3)) podeFormarTriangulo = false; // � falso, logo o c�digo n�o ser� executado
		if(n3 >= (n2 + n1)) podeFormarTriangulo = false; // � falso, logo o c�digo n�o ser� executado
	
		printf("As retas cujos tamanhos voc� informou ");
		if(podeFormarTriangulo){ // podeFormarTriangulo = true, logo o c�digo ser� executado
			printf("podem formar tri�ngulo!\n");
			if(n1 == n2 && n2 == n3){ // falso  
				printf("O tri�ngulo formado � do tipo: equil�tero."); //c�digo n�o executado
			} else if(n1 == n2 || n2 == n3 || n3 == n1){ // n2 == n3 -> v
				printf("O tri�ngulo formado � do tipo: is�sceles."); //c�digo executado
			} else { //if ja foi encerrado, logo esse else e seu bloco n�o ser�o executados
				printf("O tri�ngulo formado � do tipo: escaleno.");
			}
		} 
		else printf("n�o podem formar tri�ngulo");
		printf("\n\n");
		system("PAUSE");
	
	}
	
	return 0;
}
