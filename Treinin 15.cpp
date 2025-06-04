#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	float desconto, valor;
	
	printf("Digite um valor:");
	scanf("%f", &valor);
	
	system("cls || clear");
	
	desconto = valor + (valor * 5 / 100);
	
	printf("O valor digitado R$%2.f com reajute de 5%% = %.2f", valor, desconto);
	
	
	
}
