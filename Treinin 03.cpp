#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	float nota1, nota2, resultado, media;
	
	printf("Digite sua 1º nota:");
	scanf("%f", &nota1);
	
	printf("Digite sua 2º nota:");
	scanf("%f", &nota2);
	
	
	resultado = nota1 + nota2;
	media = resultado / 2;
	
	printf("Média: %f", media);
	
	if(media >= 7){
		printf("\nAprovado");
	}
	else{
		printf("\nReprovado");
	}
	
	
	return 0;
}
