#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>


int main(){
	setlocale(LC_ALL,"");
	double arrendonda_pbaixo = 0;
	double arrendoda_pcima = 0;
	double n;
	int opcao = 0;
	
	printf("||Escolha qual arredondamento deseja fazer||\n");
	printf("||1 - ARREDONDAMENTO PARA BAIXO v||\n");
	printf("||2 - ARREDONDAMENTO PARA CIMA ^||\n");
	printf("||3 - ARREDONDAMENTO PARA BAIXO v e ARREDONDAMENTO PARA CIMA ^||\n");
	
	printf("Escolha uma das op��es:");
	scanf("%i",&opcao);
	
	printf("Digite um n�mero para ser arredondo:");
	scanf("%lf",&n);
	
	system("cls || clear");
	
	 switch (opcao){
	 	
	  case 1:
	  arrendonda_pbaixo = floor(n);
	  printf("Arredondamento para baixo: %lf\n",  arrendonda_pbaixo);	
	  break;
	  
	  case 2:
	  arrendoda_pcima = ceil(n);
	  printf("Arredondamento para cima: %lf\n", arrendoda_pcima);
	  break;
	  
      case 3: 
	  printf("N�mero digitado pelo usu�rio: %lf\n", n);
	  
	  arrendonda_pbaixo = floor(n);
	  printf("Arredondamento o n�mero %lf para baixo: %lf\n", n, arrendonda_pbaixo);	
	  	  
	  arrendoda_pcima = ceil(n);
	  printf("Arredondamento o n�mero %lf para cima: %lf\n", n, arrendoda_pcima);
	  break;
	  
	  default:
	  printf("Op��o digitada inv�lida\n"); 	
	 	
	 }
	
	
	
	
	
	
	
	return 0;
}
