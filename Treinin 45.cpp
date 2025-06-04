#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>



int main(){
	setlocale(LC_ALL, "");
	int numero1, numero2;
	
	printf("Digite o 1ª número:");
	scanf("%i",&numero1);
	
	printf("Digite o 2º número:");
	scanf("%i",&numero2);
	
	if (numero1 > numero2){
		printf("O 1º número é maior que o 2º número.");
	}else if(numero1 < numero2){
		printf("O 2º número número é maior que o 1º número.");
	}else{
		printf("O 1º número é igual a 2º número");
	}
	
	getch();
	
	
	
	
	return 0;
}
