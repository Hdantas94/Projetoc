#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorio.h"
#include "funcoes.h"


void moduloRelatorio(void) {
	menuRelatorio();						
} 



char menuRelatorio(void) {
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
	printf("///                Developed by  @Hdantas94 - 2021                        ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Relatorio = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Listar funcionarios cadastrados por tarefa               ///\n");
	printf("///           2. Listar tarefas por funcionario                           ///\n");
	printf("///           3. Listar tarefas por data                                  ///\n");
	printf("///           4. Exibir lista de funcionarios sem tarefas cadastradas     ///\n");
	printf("///           0. Voltar ao menu anterior                                  ///\n");
	printf("///                                                                       ///\n");
	printf("///           Escolha a opção desejada: ");
	scanf("%c", &op);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	return op;
}



