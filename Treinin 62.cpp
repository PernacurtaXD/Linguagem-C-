#include <stdio.h>
#include <math.h>

int main(){
	
	int n, resultado, expoente = 2;
	
	
	scanf("%i", &n);
	
	for(int i = 1; i <= n; i++){
		
		resultado = i * i;			
			
		if(i % 2 == 0){

			printf("%i^2 = %i\n", i, resultado);
		}
	}
	
	return 0;
}

