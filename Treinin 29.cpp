#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>


int main(){
	setlocale(LC_ALL, "");
	int numero;
	
	srand(time(NULL));//serve para  mudar essa semente e gerar sequ�ncias diferentes
	
	
	numero = rand() % 100;
	printf("N�mero Aleat�rio: %i", numero);
	
	//rand() => n�mero aleat�rio qualquer 
	//rand() %  10 => N�mero entre 0 e 9 
	
}
