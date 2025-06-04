#include <stdio.h>


int main(){
	int i, contador_pares = 0;
	int num;
	
	
	for(i = 0; i <= 4; i++){
	
	
		scanf("%i",&num);
	
	
		if(num % 2 == 0){
			contador_pares++;
		}
	}
	
	printf("%i valores pares\n", contador_pares);
	return 0;
}
