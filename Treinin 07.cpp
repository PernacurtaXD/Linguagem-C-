#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define notas 3

int main(){
	setlocale(LC_ALL, "");
	char nome_aluno[200];
	float nota[notas], soma = 0, media = 0;
	int i, contador = 0;
	
	for (i = 0; i < notas; i++){
		printf("Digite a %iº nota: ", i+1);
		scanf("%f",&nota[i]);
	
		soma = soma + nota[i];
}
	system("cls || clear");
	media = soma / notas;
	
	for(i = 0; i < notas; i++){
		printf("\nNota %iº: %.1f", i, nota[i]);
	}	
	
	
	printf("\nMédia: %.1f", media);
	
	
	
	
}
