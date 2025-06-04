#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main(){
	setlocale(LC_ALL,"");
	float distancia;
	float velocidade;
	int tempo;
	float litrosUsados;
	
	printf("Digite o tempo percorrido na viagem:");
	scanf("%i",& tempo);
	
	
	printf("Digite a velocidade(km) percorrida na viagem:");
	scanf("%f",& velocidade);
	
	
	distancia = tempo * velocidade;
	litrosUsados = distancia / 12;
	
	printf("Quantidade de litros de combustível gasto na viagem: %.2fL", litrosUsados);
	
}

