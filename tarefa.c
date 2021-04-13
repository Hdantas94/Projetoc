#include <stdio.h>
#include <stdlib.h>
#include "tarefa.h"


void moduloTarefa(void) {
	char opcao;
	do {
		opcao = menuTarefa();
		switch(opcao) {
			case '1': 	cadastrarTarefa();
						break;
			case '2': 	pesquisarTarefa();
						break;
			case '3': 	atualizarTarefa();
						break;
			case '4': 	excluirTarefa();
						break;
		} 		
	} while (opcao != '0');
}


char menuTarefa(void) {
		char op;
    system("cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =  Agenda de Tarefas e Compromissos   = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Hdantas94 - Jan, 2021                   ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =    Menu Tarefa    = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar uma nova tarefa                                ///\n");
	printf("///           2. Pesquisar por tarefas ja cadastradas                     ///\n");
	printf("///           3. Atualizar uma tarefa                                     ///\n");
	printf("///           4. Excluir dados de uma tarefa                              ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opcao desejada:                                   ///\n");
	scanf("%c", &op);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

void cadastrarTarefa(void) {
	Tarefa *trf;

    system("cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =  Agenda de Tarefas e Compromissos   = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Hdantas94 - Jan, 2021                   ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = = Cadastrar Tarefa  = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	trf = (Tarefa*) malloc(sizeof(Tarefa));
	printf("///           Tipo:                                                       ///\n");
	scanf("%[^\n]", trf->tipo);
	getchar();
	printf("///           Descricao:                                                  ///\n");
	scanf("%[^\n]", trf->desc);
	getchar();
	printf("///           Responsavel:                                                ///\n");
	scanf("%[^\n]", trf->codRespons);
	getchar();
	printf("///           Data:                                                       ///\n"); 
	scanf("%[^\n]", trf->data);
	getchar();
	printf("///           Horário:                                                       ///\n"); 
	scanf("%[^\n]", trf->horario);
	getchar();
	printf("///           Prioridade:                                                 ///\n");
	scanf("%[^\n]", trf->prioridade);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void pesquisarTarefa(void) {

}

void atualizarTarefa(void) {

}

void excluirTarefa(void) {

}

