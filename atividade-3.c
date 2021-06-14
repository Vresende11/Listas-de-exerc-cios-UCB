#include <stdio.h>//bibliotecas de entrada,saida e funçoes
#include <stdlib.h>

int main(){
//variaveis float para numeros reais
float number1, number2, number3, media;

//sistema para recebe informções do usuario
printf("Digite o primeiro numero: ");
scanf("%f", &number1);
printf("\nDigite o segundo numero: ");
scanf("%f", &number2);
printf("\nDigite o terceiro numero: ");
scanf("%f", &number3);


//formula para calcular a media dos numeros digitados
media = (number1 + number2 + number3) / 3;

//mostra para o usuario a media 
printf("\nA media aritimetica dos numeros digitados: %f", media);

system("pause");
return 0;
}
