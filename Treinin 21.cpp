#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	int a, b;
	int b2, a2;
	
	printf("Digite um n�mero para a letra A:");
	scanf("%i", &a);
	
	
		
	printf("Digite um n�mero para a letra B:");
	scanf("%i", &b);

	
	b2 = a;
	a2 = b;
	
	printf("\n||Convers�o de Valores||");
	printf("\nLetra A: %i", a2);
	printf("\nLetra B: %i", b2);
}

