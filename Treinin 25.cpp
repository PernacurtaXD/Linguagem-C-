#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	float f, c;
	
	printf("Digite a temperatura em Fahrenheit:");
	scanf("%f", &f);
	
	c = (5*(f-32)/9);
	
	printf("Temperatura em Fahrenheit: %.1f°F", f);
	printf("\nTemperatura em Celsius: %.1f°C", c);
	
	
}
