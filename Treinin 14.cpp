#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	float salario_minimo = 1293.20, salario_usuario = 0, quant_salario = 0;
	
	printf("Digite seu sal�rio:");
	scanf("%f", &salario_usuario);
	
	quant_salario = salario_usuario / salario_minimo;
	
	
	printf("O sal�rio do usu�rio � R$ %.1f\nA quantidade de sal�rios �: %.1f", salario_usuario, quant_salario);
	
	return 0;	
}

