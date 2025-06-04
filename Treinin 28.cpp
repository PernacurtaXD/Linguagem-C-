#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int a;
	int b;
	int quociente, resto;
	
	printf("Digite um número para A:");
	scanf("%i",&a);
	
	printf("Digite um número para B:");
	scanf("%i",&b);
	
	
	quociente = a / b;
	resto = a % b;	
	
	printf("Divisão ente A e B");
	printf("\nQuociente =  %i", quociente);
	printf("\nResto =  %i", resto);

	
	
}

