#include <stdio.h>

void somar(int num1, int num2){
	int resultado = num1 + num2;
	
	 printf("Resultado = %i", resultado);
}



int main(){
	int numero1, numero2;
	
	printf("Digite o primeiro número: ");
	scanf("%i",&numero1);
	
	
	printf("Digite o segundo número: ");
	scanf("%i",&numero1);
	
 somar(numero1, numero2);
	
	
	
	return 0;
}
