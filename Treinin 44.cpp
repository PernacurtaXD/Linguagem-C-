#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


// Função de multiplicação****
int multiplicacao(int num1,int num2){// Também declaramos os tipos da variável entre os parenteses
	int resultado;
	return resultado = num1 * num2;
}


// ****Função principal****
int main(){
	setlocale(LC_ALL, "");
	int v1, v2;
	int resultado;
	
	printf("Digite um número:"); 	 
	scanf("%i",&v1);
	
	printf("Digite mais um número:"); 	 
	scanf("%i",&v2);
	
	resultado = multiplicacao(v1, v2);
	
	printf("Resultado = %d", resultado);
	
	getch();
	
	return 0;
}
