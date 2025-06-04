#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define notas 4

int main(){
	setlocale(LC_ALL, "");
	float soma = 0, media = 0; 
	float nota[notas];
	
	
	for(int i = 0; i < notas; i++){
		printf("Digite sua nota:");
		scanf("%f", &nota[i]);
		
		soma+=nota[i];
	}
	
	media = soma / notas;
	system("cls || clear");
	
	printf("\t||EXIBINDO DADOS||");
	for(int i =  0; i < notas; i++){
		printf("\n%iº Nota: %.1f", i+1, nota[i]);
	}
	
	printf("\n\nMédia: %.1f\n", media);
	
	printf("\n\t|||SITUAÇÃO|||");
	if(media >= 7){
		printf("\nAprovado!!");
	}else{
		printf("\nReprovado");
	}
	
	
	
}

