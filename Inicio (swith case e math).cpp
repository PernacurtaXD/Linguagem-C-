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
	
	printf("Escolha uma das opções:");
	scanf("%i",&opcao);
	
	printf("Digite um número para ser arredondo:");
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
	  printf("Número digitado pelo usuário: %lf\n", n);
	  
	  arrendonda_pbaixo = floor(n);
	  printf("Arredondamento o número %lf para baixo: %lf\n", n, arrendonda_pbaixo);	
	  	  
	  arrendoda_pcima = ceil(n);
	  printf("Arredondamento o número %lf para cima: %lf\n", n, arrendoda_pcima);
	  break;
	  
	  default:
	  printf("Opção digitada inválida\n"); 	
	 	
	 }
	
	
	
	
	
	
	
	return 0;
}
