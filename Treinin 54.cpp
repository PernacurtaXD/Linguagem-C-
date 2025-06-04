#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int contador = 0;
	float num, media, soma = 0;
	
	for(i = 0; i <= 5; i++){
		scanf("%f",&num);
		
		if(num >= 0){
			contador++;
			
			soma += num;
			
		}
	}
	media = soma / contador;
	
	
	system("cls || clear");
	
	printf("%i valores positivos\n", contador);
	printf("%.1f\n",media);
	
	
	
}
