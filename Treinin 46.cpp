#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>



int main(){
	setlocale(LC_ALL, "");
	int num, i;
	
	printf("Digite um número para começar a contagem regressiva:");
	scanf("%d", &num);
	
	
	for(i = num; i >= 0; i--){
		printf("%d\n",i);
		
	}
	
	
	
	
	return 0;
}
