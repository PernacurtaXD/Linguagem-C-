#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int numero, sucessor, antecessor;
	
	
	printf("Digite um n�mero:");
	scanf("%i", &numero);
	
	sucessor = numero + 1;
	antecessor = numero - 1;
	
	printf("Sucessor de %i � %i",numero, sucessor);
	printf("Antecessor de %i � %i", numero, antecessor);
	
}

