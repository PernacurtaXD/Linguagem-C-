// Nivel F�cil
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int num1, num2;
	int soma;
	
	printf("Digite um n�mero:");
	scanf("%i", &num1);
	
	printf("Digite mais um n�mero:");
	scanf("%i", &num2);
	
	
	soma = num1 + num2;
	
    printf("Soma = %i", soma);
	
		
	return 0;
}
