#include <stdio.h>


int main(){
	int num;
	
	scanf("%i",&num);
	
	for(int i = 0; i <= num; i++){
		
		if(i % 2 != 0){
			printf("%i\n", i);
		}
	}
	
		
	return 0;
}
