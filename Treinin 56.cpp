#include <stdio.h>


int main(){
	int i;
	int contador_impar = 0,contador_positivo = 0, num;
	int contador_par = 0, contador_negativo = 0;
	
	for (i = 0; i <= 4; i++){
		
		scanf("%i",&num);
		
		if (num % 2 == 0){
			
			contador_par++;
			
		}else{
			
			contador_impar++;
		}
		
		
		
		
		if(num > 0){
			
			contador_positivo++;	
			
		}else if(num < 0){
			
			contador_negativo++;
			
		}

			
			}
		

	printf("%i valor(es) par(es)\n", contador_par);	
	printf("%i valor(es) impar(es)\n", contador_impar);
	printf("%i valor(es) positivo(s)\n", contador_positivo);
	printf("%i valor(es) negativo(s)\n", contador_negativo);
	
	
	
	
	return 0;
}
