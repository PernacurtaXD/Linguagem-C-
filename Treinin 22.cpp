#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void cab(){
	system("cls || clear");
	fflush(stdin);
}


int main(){
	setlocale(LC_ALL,"");
	int tarefas_rotina;
	char tarefa[200];
	char nome[200], sobrenome[200], habito[200];
	int opcao, opcao_rotina, quant_rotina, metas;
	int quant_habito;
	
	
	
	printf("Digite seu nome:");
	fgets(nome, 200, stdin);
	
	printf("Digite seu sobrenome:");
	gets(sobrenome);
	
	
		
		
		
while(opcao == 0){
		cab();
		printf("1- Construir um novo hábito");
		printf("\n2- Criar uma programação de sua Rotina");
		printf("\n3- Estabeler Metas");
		printf("\n0- Sair");
		printf("\nEscolha uma das opções:");
		scanf("%i", &opcao);
		
		switch(opcao){
			
			// Hábito
			case 1:
				cab();
				printf("\n||Crie um novo hábito||");
				printf("\nQuantos hábitos deseja construir:");
				scanf("%i", &quant_habito);
				
				char habito[200];
				
				for(int i = 1; i <= quant_habito; i++){
					printf("\nDigite um hábito:");
					scanf("%s", &habito);
					
				}
				
		
			
			// Rotina
			case 2:
				
				cab();
				printf("\n||Crie a sua Rotina||");
				printf("\n1- Domigo");
				printf("\n2- Segunda-feira");
				printf("\n3- Terça-feira");
				printf("\n4- Quarta-feira");
				printf("\n5- Quinta-feira");
				printf("\n6- Sexta-feira");
				printf("\n7- Sábado");
				printf("Escolha o dia:");
				scanf("%i",&quant_rotina);
				
				printf("\n Deseja adicionar quantas tarefas no dia escolhido:");
				scanf("%i", &tarefas_rotina);
						
				
				
				switch(quant_rotina){
					case 1:
						for(int i = 1; i > tarefas_rotina; i++){
							printf("Adicione uma tarefa para Domingo:");
							scanf("%s",&tarefa);
								
						}
				
				
				
					case 2:	
						for(int i = 1; i > tarefas_rotina; i++){
							printf("Adicione uma tarefa para Segunda-feira:");
							scanf("%s",&tarefa);
								
						}
						
					
					case 3:
						for(int i = 1; i > tarefas_rotina; i++){
							printf("Adicione uma tarefa para Terça-feira:");
							scanf("%s",&tarefa);
								
						}
						break;
					
					case 4: 
						for(int i = 1; i > tarefas_rotina; i++){
							printf("Adicione uma tarefa para Quarta-feira:");
							scanf("%s",&tarefa);
								
						}
					
						
					case 5:
						for(int i = 1; i > tarefas_rotina; i++){
							printf("Adicione uma tarefa para Quinta-feira:");
							scanf("%s",&tarefa);
								
						}
						
						
					case 6:
						for(int i = 1; i > tarefas_rotina; i++){
							printf("Adicione uma tarefa para Sexta-feira:");
							scanf("%s",&tarefa);
								
						}			
						
						
					case 7:
						for(int i = 1; i > tarefas_rotina; i++){
							printf("Adicione uma tarefa para Quarta-feira:");
							scanf("%s",&tarefa);
								
						}
					
			}
			}
			
							
		
		
		
	}
	
	
	return 0;
}

