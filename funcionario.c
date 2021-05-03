#include <stdio.h>
#include <stdlib.h>
#include "funcionario.h"


void moduloFuncionario(void) {
	char opcao;
	do {
		opcao = menuFuncionario();
		switch(opcao) {
			case '1': 	cadastrarFuncionario();
						break;
			case '2': 	pesquisarFuncionario();
						break;
			case '3': 	atualizarFuncionario();
						break;
			case '4': 	excluirFuncionario();
						break;
		} 		
	} while (opcao != '0');
}

char menuFuncionario(void) {
	char op;
    system("cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =   Agenda de Tarefas e Compromissos  = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Hdantas94 - Jan, 2021                   ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Menu compromisso   = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Cadastrar um novo funcionario                            ///\n");
	printf("///           2. Pesquisar por funcionario cadastrado                     ///\n");
	printf("///           3. Atualizar dados de um funcionario                        ///\n");
	printf("///           4. Excluir um funcionario do sistema                        ///\n");
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




void cadastrarFuncionario(void) {
	Funcionario *func;


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
	printf("///           = = = = = =  Cadastrar Compromisso  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	func = (Funcionario*) malloc(sizeof(Funcionario));
	printf("///           Nome:                                                       ///\n");
	scanf("%[^\n]", func->nome);
	getchar();
	printf("///           CPF:                                                        ///\n");
	scanf("%[^\n]", func->cpf);
	getchar();
	printf("///           E-mail:                                                     ///\n");
	scanf("%[^\n]", func->email);
	getchar();
	printf("///           Data de Nascimento:                                         ///\n");
	scanf("%[^\n]", func->dataNasc);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	getchar();
	
}

void pesquisarFuncionario(void) {
	char cpf[15];
	
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
	printf("///           = = = = = =    Pesquisar usuario    = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           Informe o CPF do usuario que deseja pesquisar:              ///\n");
	scanf("%[ ]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}


void atualizarFuncionario(void) {

}

void excluirFuncionario(void) {

}