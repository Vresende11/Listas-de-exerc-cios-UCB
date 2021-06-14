#include <stdio.h>

int main() {
	int hora, minuto, segundo;
	printf("digite as horas a ser convetida: ");
	scanf("%d", &hora);
	minuto = hora * 60;
	printf("As horas convetida para minutos: %d\n", minuto);
	segundo = minuto * 60;
	printf("As horas convetida para Segundos: %d\n", segundo);
	return 0;
	}

