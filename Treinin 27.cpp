#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "");
	int i, num;
	int resultado;
	
	printf("Digite um n�mero que deseja c�lcula-lo:");
	scanf("%i", &num);	
	
	system("cls || clear");
	
	for(i = 1; i < 11; i++){
		printf("\n%i - %i = %i", num, i, resultado = (num-i));
	}
	
}

