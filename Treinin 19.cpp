#include <stdio.h>
#include <stdlib.h>
#include <locale.h>




int main(){
	setlocale(LC_ALL, "");
	float valor, desconto = 0;
	float valor_parcelado;
	int parcelar;
	int opcao;
	
	
	printf("Digite o valor do produto: ");
	scanf("%f", &valor);
	

	
	printf("\n1- À vista em Dinheiro ou Pix, recebe 15%% de desconto\n");
	printf("2- À vista no cartão de crédito, recebe 10%% de desconto\n");
	printf("3- Parcelado no cartão em 2x, preço normal do produto sem juros\n");
	printf("4- Parcelado no cartão em duas vezes ou mais, preço normal do produto mais juros de 10%%\n");
	printf("\nQual dessa opções deseja fazer a Transação?");
	scanf("%i", &opcao);
	
	
	system("cls || clear");
	
	switch(opcao){
		case 1:
			desconto = valor - (valor * 15 / 100);
					
			printf("\n\t||EXIBINDO DADOS||\n");
			printf("\t------------------");
			printf("\nForma de Pagamento: À vista Dinheiro/Pix");
			printf("\nValor com 15%% de desconto.");
			printf("\nSubtotal: \tR$%.2f", valor);
			printf("\nTotal:    \tR$%.2f", desconto);
			
			break;
			
		case 2:
			desconto = valor - (valor * 10 /100);
			
			printf("\n\t||EXIBINDO DADOS||\n");
			printf("\t------------------");
			printf("\nForma de Pagamento: À vista no cartão de crédito");
			printf("\nValor com 10%% de desconto.");
			printf("\nSubtotal: \tR$%.2f", valor);
			printf("\nTotal:    \tR$%.2f", desconto);
			
			
			break;
		case 3:
			valor_parcelado = valor / 2;
			
			printf("\n\t||EXIBINDO DADOS||\n");
			printf("\t------------------");
			printf("\nForma de Pagamento: Parcelado no cartão de 2x sem juros");
			printf("\nSubtotal:  \t\tR$%.2f", valor);
			printf("\nTotal de 2x:    \tR$%.2f", valor_parcelado);
			
			break;
		case 4:
			printf("Deseja parcelar de quantas vezes:");
			scanf("%i", &parcelar);
			
			float juros = valor + (valor * 10 / 100);
			valor_parcelado = juros / parcelar;
			
			printf("\n\t||EXIBINDO DADOS||\n");
			printf("\t------------------");
			printf("\nForma de Pagamento: Parcelado no cartão de %ix sem juros", parcelar);
			printf("\nSubtotal:  \t\tR$%.2f ", valor);
			printf("\nCom juros de 10%%: \tR$%.2f", juros);
			printf("\nTotal de 2x:    \tR$%.2f", valor_parcelado);
			
			
			
			break;
		
		
	
	}
	
	
	
	
		
	return 0;
}

