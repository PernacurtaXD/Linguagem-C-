#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	float area, base, altura, perimetro;	
		
	printf("Digite a base do Ret�ngulo:");
	scanf("%f",&base);
	
	printf("Digite a altura do Ret�ngulo:");
	scanf("%f",&altura);
	
	area = base * altura;
	perimetro = 2 * (base + altura);
	
	printf("\nBase do ret�ngulo: %.1fcm", base);	
	printf("\nAltura do ret�ngulo: %.1fcm", altura);	
	printf("\n\n�rea do ret�ngulo: %.1fcm�", area);
	printf("\nPer�metro do ret�ngulo: %.1fcm", perimetro);
}

