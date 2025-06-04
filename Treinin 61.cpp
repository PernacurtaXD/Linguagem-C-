#include <stdio.h>

int main(){
	int n, x;
	int contador_in = 0, contador_out = 0;
	
	scanf("%i",&n);
	
	for(int i = 0; i < n; i++){
		
		scanf("%i", &x);
		
		if(x >= 10 && x <= 20){
			contador_in++;
		}	
		
		else{
			contador_out++;
			}	
		}
	
	
	printf("%i in\n",contador_in);
	printf("%i out\n",contador_out);
	
	return 0;
}
