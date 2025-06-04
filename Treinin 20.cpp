#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL, "");
	char nome[200];
	int idade;
	
	printf("Digite seu nome:");
	scanf("%s", &nome);
	
	printf("Digite sua idade:");
	scanf("%i", &idade);
	
	system("cls || clear");
	
	printf("Nome do usuário: %s", nome);
	
	if(idade >= 18){
		printf("\nMaior de idade");
	}else{
		printf("\nMenor de idade");
	}
	
}

