#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define notas 3


int main(){
	setlocale(LC_ALL, "");
	float media = 0;
	float nota[notas], soma = 0;
	
	for (int i = 0; i < notas; i++){
		
		printf("Digite a %iº nota: ", i+1);
		scanf("%f", &nota[i]);
		
		soma+=nota[i];
	}
	
	media = soma / notas;
	
	system("cls || clear");
	
	
	printf("\t||Exibindo Resultado||");
	for (int i = 0; i < notas; i++){
		printf("\n%iª Nota: \t\t\t%.1f", i+1, nota[i]);
}

printf("\nMédia: \t\t%.1f", media);

	return 0;
}
