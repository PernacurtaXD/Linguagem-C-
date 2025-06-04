#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	float peso, altura, imc;
	
	printf("Digite seu peso (kg):");
	scanf("%f", &peso);
	
	
	printf("Digite seu altura(m):");
	scanf("%f", &altura);

	
	
	imc = peso / (altura * altura);
	
	
	printf("\nIMC do usuário: %.1f kg/m²\n", imc);
	
	
	if(imc < 18.5){
		printf("Abaixo do peso");
	}
	else if(imc >= 18.6 && imc <= 24.9){
		printf("Peso Ideal(parabéns)");
	}
	else if(imc >= 25.0 && imc <= 29.9){
		printf("Levemente acima do peso");
	}
	else if(imc >= 30.0 && imc <= 34.9){
		printf("Obesidade grau I");
	}else if(imc >= 35.0 && imc <= 39.9){
		printf("Obesidade grau II(severa)");
	}else if(imc >= 40.0){
		printf("Obesidade grau III(mórbida)");
	}
	
	return 0;
}

