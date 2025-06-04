#include <stdio.h>

int lerNumero(){
	int num;
	printf("Digite um número:");
	scanf("%i", &num);
	
	
	return num;
}

void exibirMensangem(int soma, int contador, int pares, int impares){
	if(contador > 0){
		float media = (float) soma / contador;
		
	printf("Media: %i\n", media);
	printf("Quantidade de números impares digitados: %i", contador_impares);
	printf("Quantidade de números digitados: %i\n", contador);
	printf("Quantidade de números pares digitados: %i\n", contador_pares);	
	}else{
		printf("Nenhum número foi digitado:");
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
