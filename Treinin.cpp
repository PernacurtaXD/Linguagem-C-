#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int a, b, c, resultado;
	
	printf("Digite um n�mero para a letra A: ");
	scanf("%i",&a);
	
	printf("Digite um n�mero para a letra B: ");
	scanf("%i",&b);

	
	if(a == b){
		resultado = a + b;
		
		printf("\nA = %i", a);
		printf("\nB = %i", b);
		
		printf("\nResultado atriu�do a C = %i", resultado);
	}
	else{
		
		resultado = a * b;
		
		printf("\nA = %i", a);
		printf("\nB = %i", b);
		
		printf("\nResultado atriu�do a C = %i", resultado);
	}
	
	
	
	
	
}

