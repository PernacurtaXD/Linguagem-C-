#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	float salario_minimo = 1293.20, salario_usuario = 0, quant_salario = 0;
	
	printf("Digite seu salário:");
	scanf("%f", &salario_usuario);
	
	quant_salario = salario_usuario / salario_minimo;
	
	
	printf("O salário do usuário é R$ %.1f\nA quantidade de salários é: %.1f", salario_usuario, quant_salario);
	
	return 0;	
}

