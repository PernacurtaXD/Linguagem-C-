#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int dia, mes, ano, idade;
	int viveu_meses, viveu_dias;
	
	printf("Digite sua idade:");
	scanf("%i", &idade);
	
	printf("Dia do seu nascimento:");
	scanf("%i", &dia);
	
	printf("Mês do seu nascimento:");
	scanf("%i", &mes);
	
	printf("Ano do seu nascimento:");
	scanf("%i", &ano);
	
	viveu_dias = idade * 365;
	viveu_meses = idade * 30;
	
	printf("Viveu %i anos\n", idade);
	printf("Viveu %i meses\n", viveu_meses);
	printf("Viveu %i dias\n", viveu_dias);
	
	return 0;
}
