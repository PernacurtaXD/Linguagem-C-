#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	float lado1, lado2, lado3;
	float perimetro;
	
	printf("Digite o lado A:");
	scanf("%f", &lado1);
	
	
	printf("Digite o lado B:");
	scanf("%f", &lado2);
	
	
	printf("Digite o lado C:");
	scanf("%f", &lado3);
	
	
	perimetro = lado1 + lado2 + lado3;
		
	
	printf("O perímetro do Triângulo é: %.1f", perimetro);
	
	
	
	
}

