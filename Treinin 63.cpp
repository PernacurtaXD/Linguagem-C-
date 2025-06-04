#include <stdio.h>

int main(){
	int i;
	int n, x;
	int contador_par, contador_impar;
	int contador_posit_par, contador_posit_impar;
	int contador_neg_par,contador_neg_impar;
		
	scanf("%i", &n);
	
	for(i = 0; i <= n; i++){
		scanf("%i", &x);
		
		
		if(x % 2 ==0){
			printf("EVEN\n");
		}else{
			printf("ODD\n");
		}
		
		
		if(x % 2 != 0 || x > 0){
			printf("EVEN POSITIVE\n");
		}else if(x % 2 != 0 || x < 0){
			printf("EVEN NEGATIVE\n");
		}
				
		
		if(x % 2 == 0 || x > 0){
			printf("EVEN POSITIVE\n");
		}else if(x % 2 == 0 || x < 0){
			printf("EVEN NEGATIVE\n");
		}
		
		
	}
	
	return 0;
}
