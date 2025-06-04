#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario_renda, imposto = 0.0;
	
	scanf("%f",&salario_renda);
	
	if(salario_renda <= 2000.00){
		printf("isento\n");
			
	}
	else if(salario_renda <= 3000.00){
		imposto = (salario_renda - 2000.00) * 0.08;
		printf("%.2f\n",imposto);
		
	}
	else if(salario_renda <= 4500.00){
		imposto = (1000.00 * 0.08) + ((salario_renda - 3000.00) * 0.18);
		printf("%.2f\n",imposto);
		
	}
	else{
		imposto = (1000.00 * 0.08) + (1500.00 * 0.18 ) + ((salario_renda - 4500.00) * 0.28);
		printf("%.2f\n",imposto);
		
	}
	
	
	
	
	
	
	return 0;
}
