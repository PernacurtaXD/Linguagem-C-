#include <stdio.h>

int main(){
	int i, n;
		
		scanf("%i",&n);
	
	for(i = 0; i <= n; i++){
		
		
		if(i % 2 != 0){
			printf("%i impar\n", i);
		}else if(i % 2 == 0){
			printf("%i par\n", i);
		}
	}
	
	
	return 0;
}
