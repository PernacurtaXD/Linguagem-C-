#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	int dias;
	int dia, mes, ano;
	
	
	printf("Digite a idade de uma pessoa em dias:");
	scanf("%i", &dias);
	
	ano = dias / 365;
	dias = dias % 365;
	mes = dias / 30;
	dia = dias % 30;
	
	printf("%i ano(s)", ano);  
	printf("%i mes(es)", mes);  
	printf("%i dia(s)", dia);
	
}
