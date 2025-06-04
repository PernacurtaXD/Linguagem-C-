#include <stdio.h>

int lerNumero(){
	int num;
	printf("Digite um n�mero:");
	scanf("%i", &num);
	
	
	return num;
}

void exibirMensangem(int soma, int contador, int pares, int impares){
	if(contador > 0){
		float media = (float) soma / contador;
		
	printf("Media: %i\n", media);
	printf("Quantidade de n�meros impares digitados: %i", contador_impares);
	printf("Quantidade de n�meros digitados: %i\n", contador);
	printf("Quantidade de n�meros pares digitados: %i\n", contador_pares);	
	}else{
		printf("Nenhum n�mero foi digitado:");
	}
}




int main(){
	int numero, soma = 0, contador = 0, pares = 0, impares = 0;
	
	while(1){
		numero = lerNumero();
		
		if(numero == -1){
			break;
		}
		
		if(numero % 2 == 0){
			pares++;
		}else{
			impares++;
		}
		
		soma+= numero;
		contador++;
		
	}
	
	
	exibirMensangem(soma, contador, pares, impares);
	
	
	return 0;
}
