#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define notas 4

int main(){
	setlocale(LC_ALL, "");
	int i;
	float nota[notas], media = 0, soma = 0;
	
	for (i = 0; i < notas; i++){
		printf("Digite a %i� nota: ", i+1);
		scanf("%f",&nota[i]);
		
		soma= soma + nota[i];
		
	}
	media = soma / notas;
	
	system("cls || clear");
	
	
	
	for (i = 0; i < notas; i++){
		printf("\n%i� Nota: %.1f", i+1, nota[i]);
	}
	printf("\n\nM�dia = %f", media);
	
	if (media > 6){
		printf("\nAprovado");
	}
	else{
		printf("\nReprovado");
	} 
	
}
