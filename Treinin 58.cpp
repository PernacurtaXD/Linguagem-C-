#include <stdio.h>

int main(){
	int i, numero;
	
	scanf("%i",&numero);
	
	if(numero % 2 == 0){
		numero = numero + 1;
	}
	
	
	for(i = 0; i <= 6;i++){
		printf("%i\n",numero);
		numero = numero + 2;
	
	}
	
	
	return 0;
}
