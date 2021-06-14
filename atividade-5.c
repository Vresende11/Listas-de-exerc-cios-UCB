#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	/* variaveis para declara a quantidade de rolos, total de metros que ser�o usados e
	metros avulsos*/
	int rolo, totalm, metros;
	/*pedi para o usuario digita a qunatidade de metros que ser�o usados*/
	printf("Digite quantos metros que seram usados:");
	scanf("%d", &totalm);
	/*if para que se a quantidade de metros for menor que os 50 metros
	o programa n fala a quantida de rolos*/
    if(totalm >= 50){
    	/*calculo para saber a quantidade de rolos que obteve*/
    	rolo = totalm / 50;
    	printf("O total de rolos: %d\n", rolo);
    	/*calculo para saber a quantidade de metros que obteve*/
    	metros = totalm % 50;
    	printf("O total de metros avulsos: %d\n", metros);
	}
	/*se o valor de metros for menor que 50 o programa roda else*/
	else{
		/*mostra a quantidade de metros que sera necessaria*/
		printf("O total de metros: %d\n", totalm);		
	}
	system("pause");
	return 0;
}
