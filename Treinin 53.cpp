#include <stdio.h>

int main(){
	int i, contador = 0;
	int num;
	
	for(i = 1; i < 6;i++){
		scanf("%i",&num);
		
		if(num > 0){
			contador++; 
		}
	}	
	
	printf("%i \n", contador);
	
	
	
}
