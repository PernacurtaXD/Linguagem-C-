#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	float a, b, c;
	float a2, b2, c2;
	
	printf("Qual � o �ngulo (A) do tri�ngulo:")	;
	scanf("%f", &a);
	
	printf("Qual � o �ngulo (B) do tri�ngulo:");
	scanf("%f",&b);
	
	printf("Qual � o �ngulo (C) do tri�ngulo:");
	scanf("%f", &c);
	
	if(a + b  > c && a + c > b && b + c > a){
	
	if(a == b == c){
		printf("Equil�tero");
	}
	else if(a == b || a == c || b == c){
		printf("Is�celes");
	}
	else {
		printf("Escaleno");
	}
}
	
return 0;
}

