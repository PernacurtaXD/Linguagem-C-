#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	float area, base, altura, perimetro;	
		
	printf("Digite a base do Retângulo:");
	scanf("%f",&base);
	
	printf("Digite a altura do Retângulo:");
	scanf("%f",&altura);
	
	area = base * altura;
	perimetro = 2 * (base + altura);
	
	printf("\nBase do retângulo: %.1fcm", base);	
	printf("\nAltura do retângulo: %.1fcm", altura);	
	printf("\n\nÀrea do retângulo: %.1fcm²", area);
	printf("\nPerímetro do retângulo: %.1fcm", perimetro);
}

