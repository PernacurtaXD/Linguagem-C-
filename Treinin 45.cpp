#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>



int main(){
	setlocale(LC_ALL, "");
	int numero1, numero2;
	
	printf("Digite o 1� n�mero:");
	scanf("%i",&numero1);
	
	printf("Digite o 2� n�mero:");
	scanf("%i",&numero2);
	
	if (numero1 > numero2){
		printf("O 1� n�mero � maior que o 2� n�mero.");
	}else if(numero1 < numero2){
		printf("O 2� n�mero n�mero � maior que o 1� n�mero.");
	}else{
		printf("O 1� n�mero � igual a 2� n�mero");
	}
	
	getch();
	
	
	
	
	return 0;
}
