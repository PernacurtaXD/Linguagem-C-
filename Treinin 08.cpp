#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "");
	int opcao; 
	int opcao_filme; 
	int opcao_comida; 
	int opcao_musica;
	
	cout << "Ol�, o que voc� deseja?";
	cout << "\n1- Assistir um v�deo";
	cout << "\n2- Comer algo";
	cout << "\n3- Ouvir uma m�sica";
	
	cout << "\nEscolha uma das op��es:";
	scanf("%i", &opcao);
	
	
	system("cls || clear");
	
	switch(opcao){
		case 1:
			cout << "\n1- Homem Aranha";
			cout << "\n2- Tartaruga Ninja";
			cout << "\n3- Batman";
			cout << "\nQual filme deseja assistir?";
			scanf("%i", &opcao_filme);
			
			switch(opcao_filme){
				case 1:
					cout << "\nAssistir Homem Aranha";
				break;
				
				case 2:
					cout << "\nAssistir Tartaruga Ninja";
				break;
				
				case 3:
					cout << "\nAssistir Batman";
				break;	
				
			}
			
			break;
		case 2:
			cout << "\n1- Lasanha";
			cout << "\n2- Hamb�rguer";
			cout << "\n3- Sandu�che";
			cout << "\n4- P�o de queijo";
			cout << "\nEscolha uma das op��es:";
			scanf("%i", &opcao_comida);
			
			switch(opcao_comida){
			case 1:
				cout << "Comer Lasanha.";
				break;
			case 2:
				cout << "Comer Hamb�rguer.";
			    break;
			case 3:
				cout << "Comer Sandu�che.";
			break;
			case 4:
				cout << "Comer P�o de Queijo.";
			break;
			}
		
		system("cls || clear");
		case 3:
			cout << "Playist";
			cout << "\nSukuna (Jujutsu Kaisen) - Santu�rio Malevolente | M4rkim";
			cout << "\nLil Chainz - Dia Z (ft. Akashi Cruz & Oushan)";
			cout << "\nSolo Leveling Season 2 -Arise from the Shadow- Opening | 'ReawakeR'";
			break;
		
   }
	
	
	return 0;
}
