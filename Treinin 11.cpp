#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int numero;
	
	printf("Digite um número:");
	scanf("%i",&numero);
	
	system("cls || clear");
	
	if (numero % 2 == 0){
		printf("Número digitado pelo usuário: %i", numero);
		printf("\nO número é par: %i", numero);	
	}
	else{
		printf("Número digitado pelo usuário: %i", numero);
		printf("\nO número é impar: %i", numero);
	}
	
	if(numero > 0){
		printf("\nO número digitado é positivo.");
	}
	else{
		printf("\nO número digitado é negativo.");
	}
	
	
}
