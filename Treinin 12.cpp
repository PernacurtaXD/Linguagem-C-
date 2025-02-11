#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int numero, sucessor, antecessor;
	
	
	printf("Digite um número:");
	scanf("%i", &numero);
	
	sucessor = numero + 1;
	antecessor = numero - 1;
	
	printf("Sucessor de %i é %i",numero, sucessor);
	printf("Antecessor de %i é %i", numero, antecessor);
	
}

