#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	int var = 15;
	int *ptr;
	
	ptr = &var;
	// O *ptr � um apontador � um conte�do do endere��o da var�vel que ptr aponta 
	// ptr: o endere�o da vari�vel 
	//&ptr: o endere�o do ponteiro
	/*
	Em resumo ele aponta para onde a vari�vel se encontra na vari�vel.
	*/ 
	
	printf("Conteudo de var = %d\n", var);
	printf("Endereco de var = %p\n", &var);
	
	printf("\n\End");
	while(1);
	return 0;
}

