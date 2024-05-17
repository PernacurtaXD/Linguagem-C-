#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	int ano, dia;
	char mes [20];
	
	printf("Em que dia você nasceu?");
	scanf("%i",&dia);
	
	printf("Em que mês vocÊ nasceu?");
	scanf("%s",&mes);
	
	printf("Em que ano você nasceu?");
	scanf("%i",&ano);
	
	system("cls || clear");
	
			
	printf("Você nasceu em %i de %s de %i, Certo?", dia, mes, ano);

	
	
	
	return 0;
}
