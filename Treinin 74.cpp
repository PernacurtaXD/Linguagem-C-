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
	
	printf("Digite um n�mero:");
	scanf("%f",&numero);
	
	float elevado = quadrado(numero);
	
	printf("\nO n�mero digitado %2.f� ao quadrado � %2.f", numero, elevado);
	
	return 0;
}
