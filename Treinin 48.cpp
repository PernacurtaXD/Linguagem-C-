#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <conio.h>

int main(){
	
	
	char login[200], senha[200];
	char logincadast[200] = "Luis", senhacadast[200] = "1234";
	
	do{
	
	printf("Login:\n");
	scanf("%s",&login);
	
	printf("Senha:\n");
	scanf("%s",&senha);
	
	system("cls ||clear");
	
	
	}while(!strcmp(login,logincadast) && !strcmp(senha,senhacadast));
	
	
	
	return 0;
}
