#include <stdio.h>

int main(){
	int i, number;
	int somar = 0;
	
	printf("Digite um n�mero:");
	scanf("%i",&number);
	
	if(number > 0){
		for(i = 1; i <= number; i++){
			
			somar+=number;
			printf("%i x %i = %i\n", number, i, number * i);
		}	
	}else{
		printf("n�mero negativo");
	}
}
