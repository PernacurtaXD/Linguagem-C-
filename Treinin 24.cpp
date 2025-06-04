#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	float a, b, c;
	float a2, b2, c2;
	
	printf("Qual é o ângulo (A) do triângulo:")	;
	scanf("%f", &a);
	
	printf("Qual é o ângulo (B) do triângulo:");
	scanf("%f",&b);
	
	printf("Qual é o ângulo (C) do triângulo:");
	scanf("%f", &c);
	
	if(a + b  > c && a + c > b && b + c > a){
	
	if(a == b == c){
		printf("Equilátero");
	}
	else if(a == b || a == c || b == c){
		printf("Isóceles");
	}
	else {
		printf("Escaleno");
	}
}
	
return 0;
}

