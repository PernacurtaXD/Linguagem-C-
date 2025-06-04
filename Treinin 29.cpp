#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(){
	setlocale(LC_ALL, "");
	int numero;
	
	srand(time(NULL));//serve para  mudar essa semente e gerar sequÊncias diferentes
	
	
	numero = rand() % 100;
	printf("Número Aleatório: %i", numero);
	
	//rand() => número aleatório qualquer 
	//rand() %  10 => Número entre 0 e 9 
	
}
