#include <stdio.h>
#include <conio.h>

int main(){
	int numero;
	float media;
	int contador = 0, somar = 0;
	int contador_pares = 0;
	int contador_impares = 0;
	
	while(1){
		printf("Digite um n�mero:");
		scanf("%i",&numero);
		
		
		
		
		if(numero == -1){
			break;
		}
		
		
		if(numero % 2 == 0){
			contador_pares++;
		}else{
			contador_impares++;
		}
		
		contador++;
		somar+=numero;
	}
	
	media = (float) somar / contador;
	
	getch();
	
	printf("Media: %i\n", media);
	printf("Quantidade de n�meros digitados: %i\n", contador);
	printf("Quantidade de n�meros pares digitados: %i\n", contador_pares);
	printf("Quantidade de n�meros impares digitados: %i", contador_impares);
	
	return 0;
}
