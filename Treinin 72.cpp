#include <stdio.h>
#include <stdlib.h>


int lerNumero() {
    int num;
    printf("Digite um número (-1 para encerrar): ");
    scanf("%d", &num);
    return num;
}

void exibirResultados(int soma, int contador, int pares, int impares) {
    if (contador > 0) {
        float media = (float)soma / contador;
        printf("\nMedia: %.2f\n", media);
        printf("Quantidade de números digitados: %d\n", contador);
        printf("Quantidade de números pares: %d\n", pares);
        printf("Quantidade de números ímpares: %d\n", impares);
    } else {
        printf("Nenhum número válido foi digitado.\n");
    }
}

void salvarArquivo(int soma, int contador, int pares, int impares){ 
	FILE *arquivo = fopen("resultado.txt", "w");

 	if (arquivo == NULL){
 		printf("Erro ao criar o arquivo");
 		
 		return;
	 }
 	
 	if(contador > 0){
 		float media = (float)soma / contador;
 		
 		fprintf(arquivo, "Media: %i\n", media);
 		fprintf(arquivo, "Quantidade de números digitados: %i\n", contador);
 		fprintf(arquivo, "Quantidade de numeros pares: %i\n", pares);
 		fprintf(arquivo, "Quantidade de numeros impares: %i\n", impares);
 		
	 }else{
	 	fprintf(arquivo, "Nenhum número foi digitado\n");
	 }
	 
	 fclose(arquivo);
}

int main() {
    int numero, soma = 0, contador = 0, pares = 0, impares = 0;

    while (1) {
        numero = lerNumero();

        if (numero == -1)
            break;

        if (numero % 2 == 0)
            pares++;
        else
            impares++;

        soma += numero;
        contador++;
    }

    exibirResultados(soma, contador, pares, impares);
	
	salvarArquivo(soma, contador, pares, impares);
    return 0;
}

