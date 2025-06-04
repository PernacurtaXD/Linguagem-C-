#include <stdio.h>

int main(){
	int x, y, i;
	int soma = 0;
	int t;
	
	scanf("%i",&x);
	scanf("%i",&y);
	
	
	if(x > y){
		t = x;
		x = y;
		y = t;
	}
	
	for(i = x + 1; i <= y; i++){
		if(i % 2 != 0){
			soma += i;
		}
		
	}
		
	printf("%i", soma);
	return 0;
}
