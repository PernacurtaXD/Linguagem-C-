#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
	int senha;

	
	while(1) {
		printf("Digite sua senha:");
		scanf("%d", &senha);
		
		if(senha == 1234){
			system("cls || clear");
			printf("Seja Bem-vindo(a)\n");
			
			break;
		}else{
			system("cls || clear");
			printf("Senha incorreta\n");
			getch();
		}
	}
	
	return 0;
}
