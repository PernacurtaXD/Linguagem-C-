#include <stdio.h>


int main(){
	int idade = 20;

// Imprime na tela
printf("Sua idade: %d\n", idade);

// Grava no arquivo
FILE *arq = fopen("saida.txt", "w");
fprintf(arq, "Sua idade: %d\n", idade);
fclose(arq);

	
	return 0;
	
}
