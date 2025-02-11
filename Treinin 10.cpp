#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	int a, b, c;
	int soma;
	
	printf("Digite um número para a letra (A):");
	scanf("%i",&a);
	
	printf("Digite um número para a letra (B):");
	scanf("%i",&b);
	
	printf("Digite um número para a letra (C):");
	scanf("%i",&c);
	
	system("cls || clear");
	
	soma = a + b;
	
	
	if (soma < c){
		printf("A = %i", a);
		printf("\nB = %i", b);
		printf("\nC = %i", c);
		printf("\n\nA soma de A e B: %i", soma);
		
		printf("\n\nA soma de A e B é menor que C.");
	}
	else if(soma == c){
		printf("A = %i", a);
		printf("\nB = %i", b);
		printf("\nC = %i", c);
		printf("\n\nA soma de A e B: %i", soma);
		
		printf("\n\nA soma de A e B é igual a C.");
	}
	
	else{
		printf("A = %i", a);
		printf("\nB = %i", b);
		printf("\nC = %i", c);
		printf("\n\nA soma de A e B: %i", soma);
		
		printf("\n\nA soma de A e B é maior que C.");
	}
}
