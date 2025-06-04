 // Nivel Fácil
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	int i, num, soma;
	
	printf("Digite um número:");
	scanf("%i", &num);
	
	
	for(i = 0; i <= 10; i++){
		soma = num * i;
		printf("%i x %i = %i\n", num, i, soma);
	}
	
	return 0;
}
