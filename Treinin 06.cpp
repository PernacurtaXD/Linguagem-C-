#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	char login[200], senha[200];
	char login_cadastrado[200] = "Luis02", senha_cadastrada[200] = "4002";

	
	
	printf("Digite o seu login:");
	scanf("%s", &login);
	
	printf("Digite sua senha:");
	scanf("%s", senha);
	
	
	if(login == login_cadastrado  && senha == senha_cadastrada ){
		printf("Olá Luis02!");
	}else{
		printf("Login ou senha incorretos");
	}
	
	
}
