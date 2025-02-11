#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int main(){
	setlocale(LC_ALL, "");
	char nome[200], sobrenome[400];
	int ano_atual, ano, dia, mes;
	 
	
	printf("Digite seu nome:");
	scanf("%s", &nome);
	
	
	printf("Digite seu sobrenome:");
	scanf("%s", &sobrenome);
	
	
	printf("Digite o dia em que nasceu:");
	scanf("%i", &dia);
	
	
	printf("Digite o mês(1 a 12) em que nasceu:");
	scanf("%i", &mes);
	
	
	printf("Digite o ano em que nasceu:");
	scanf("%i", &ano);
	
	switch(mes){
		case 1:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Janeiro de %i", dia, ano);
			break;
		
		case 2:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Fevereiro de %i", dia, ano);
			break;
		
		case 3:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Março de %i", dia, ano);
			break;
		
		case 4:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Abril de %i", dia, ano);
			break;
		
		case 5:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Maiode de %i", dia, ano);
			break; 
		
		case 6:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Junho de %i", dia, ano);
			break;
		
		case 7:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Julho de %i", dia, ano);
			break;
		
		case 8:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Agosto de %i", dia, ano);
			break;
		
		case 9:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Setembro de %i", dia, ano);
			break;
		
		case 10:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Outubro de %i", dia, ano);
			break;
		
		case 11:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Novembro de %i", dia, ano);
			break;
		
		case 12:
			system("cls || clear");
			printf("O nome do usuário é %s %s\n", nome, sobrenome);
			printf("Nasceu em %i Dezembro de %i", dia, ano);
			break;
		
	}
	
	
	
	
	return 0;
}
