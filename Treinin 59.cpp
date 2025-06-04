#include <stdio.h>


int main(){
	int num, i;
	int resultado;
	
	scanf("%i", &num);
	
	for(i = 1; i <= 10; i++){
		resultado = num * i;
		printf("%i x %i = %i\n", i, num, resultado);
		
	}
	
	
	
	return 0;
}
