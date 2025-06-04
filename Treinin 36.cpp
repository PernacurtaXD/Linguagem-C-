#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int var = 15;
	int *ptr;
	
	ptr = &var;
	// O *ptr é um apontador é um conteúdo do endereçço da varável que ptr aponta 
	// ptr: o endereço da variável 
	//&ptr: o endereço do ponteiro
	/*
	Em resumo ele aponta para onde a variável se encontra na variável.
	*/ 
	
	printf("Conteudo de var = %d\n", var);
	printf("Endereco de var = %p\n", &var);
	
	printf("\n\End");
	while(1);
	return 0;
}

