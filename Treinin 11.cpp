#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int numero;
	
	printf("Digite um n�mero:");
	scanf("%i",&numero);
	
	system("cls || clear");
	
	if (numero % 2 == 0){
		printf("N�mero digitado pelo usu�rio: %i", numero);
		printf("\nO n�mero � par: %i", numero);	
	}
	else{
		printf("N�mero digitado pelo usu�rio: %i", numero);
		printf("\nO n�mero � impar: %i", numero);
	}
	
	if(numero > 0){
		printf("\nO n�mero digitado � positivo.");
	}
	else{
		printf("\nO n�mero digitado � negativo.");
	}
	
	
}
