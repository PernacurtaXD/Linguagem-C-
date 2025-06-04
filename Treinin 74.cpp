#include <stdio.h>
#include <math.h>
#include <locale.h>

float quadrado(float numero){
	
	float resultado = pow(numero, 2);
	
	return resultado;
}





int main(){
	setlocale(LC_ALL, "");
	float numero;
	
	printf("Digite um número:");
	scanf("%f",&numero);
	
	float elevado = quadrado(numero);
	
	printf("\nO número digitado %2.f² ao quadrado é %2.f", numero, elevado);
	
	return 0;
}
