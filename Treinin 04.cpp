#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	int nota;
	
	for(int i = 0; i <= 9; i++){ //Para que possa iterar, é necessário que o i venha ser < "valor".
		
		printf("Digite %iª sua nota:", i+1);
		scanf("%f", &nota);
	}
	
	
return 0;	
}
