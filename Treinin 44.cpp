#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>


// Fun��o de multiplica��o****
int multiplicacao(int num1,int num2){// Tamb�m declaramos os tipos da vari�vel entre os parenteses
	int resultado;
	return resultado = num1 * num2;
}


// ****Fun��o principal****
int main(){
	setlocale(LC_ALL, "");
	int v1, v2;
	int resultado;
	
	printf("Digite um n�mero:"); 	 
	scanf("%i",&v1);
	
	printf("Digite mais um n�mero:"); 	 
	scanf("%i",&v2);
	
	resultado = multiplicacao(v1, v2);
	
	printf("Resultado = %d", resultado);
	
	getch();
	
	return 0;
}
