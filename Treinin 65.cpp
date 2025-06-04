#include <stdio.h>

int main(){
	int numero, somar = 0;
	
	do{
		scanf("%i",&numero);
		somar+=numero;
				
	}while(numero != 0);
	
		
	printf("Total = %i", somar);
		
	
	
	return 0;
}
