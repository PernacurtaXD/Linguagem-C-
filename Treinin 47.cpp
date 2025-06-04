#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char login[200], senha[200];
	char logincadast[200] = "Luis", senhacadast[200] = "1234";
	
	printf("Login:\n");
	scanf("%s",&login);
	
	printf("Senha:\n");
	scanf("%s",&senha);
	
	do{
		
	}while()
	if(!strcmp(login, logincadast) && !strcmp(senha, senhacadast)){
		printf("Seja Bem-Vindo %s", logincadast);
	}else{
		printf("Login ou senha, inválidos.");
	}
 
	return 0;	
}

