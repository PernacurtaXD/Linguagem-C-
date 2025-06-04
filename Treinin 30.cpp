#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	float valor_aula, salarioBruto, descontoInss;
	float salarioLiquido;
	int numero_mes;
	

	
	printf("Digite o valor da hora-aula?");
	scanf("%f", &valor_aula);
	
	printf("Digite o número de aulas dadas no mês:");
	scanf("%i", &numero_mes);
	
	salarioBruto = valor_aula * numero_mes;
	printf("\nSalário Bruto: %.2f", salarioBruto);
	
	if (salarioBruto <= 1518.00){
		descontoInss = salarioBruto * 7.5 / 100;
		printf("\nDesconto INSS de 7,5%% de R$%2.f", descontoInss);
		
		salarioLiquido = salarioBruto - descontoInss;
		printf("\nSalário Líquido: R$%2.f", salarioLiquido);
	
	}
	else if(salarioBruto >= 1508.01 && salarioBruto <= 2793.88){
		descontoInss = salarioBruto * 9 / 100;
		printf("\nDesconto INSS de 9%% de R$%2.f", descontoInss);

		salarioLiquido = salarioBruto - descontoInss;
		printf("\nSalário Líquido: R$%2.f", salarioLiquido);
			
	}
	else if(salarioBruto >= 2793.89 && salarioBruto <= 4190.83){
		descontoInss = salarioBruto * 12 / 100;
		printf("\nDesconto INSS de 12%% de R$%2.f", descontoInss);
		
		salarioLiquido = salarioBruto - descontoInss;
		printf("\nSalário Líquido: R$%2.f", salarioLiquido);
	
	}
	else if(salarioBruto >= 4190.84 && salarioBruto <= 8157.41){
		descontoInss = salarioBruto * 14 / 100;
		printf("\nDesconto INSS de 14%% de R$%2.f", descontoInss);
		
		
		salarioLiquido = salarioBruto - descontoInss;
		printf("\nSalário Líquido: R$%2.f", salarioLiquido);
	
	}
	
	
	
}

