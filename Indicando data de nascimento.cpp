#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
	setlocale(LC_ALL,"");
	int ano, dia;
	char mes [20];
	
	printf("Em que dia voc� nasceu?");
	scanf("%i",&dia);
	
	printf("Em que m�s voc� nasceu?");
	scanf("%s",&mes);
	
	printf("Em que ano voc� nasceu?");
	scanf("%i",&ano);
	
	system("cls || clear");
	
			
	printf("Voc� nasceu em %i de %s de %i, Certo?", dia, mes, ano);

	
	
	
	return 0;
}
