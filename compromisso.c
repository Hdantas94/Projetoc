#include <stdio.h>
#include <stdlib.h>
#include "compromisso.h"

void moduloCompromisso(void) {
	char opcao;
	do {
		opcao = menuCompromisso();
		switch(opcao) {
			case '1': 	cadastrarCompromisso();
						break;
			case '2': 	pesquisarCompromisso();
						break;
			case '3': 	atualizarCompromisso();
						break;
			case '4': 	excluirCompromisso();
						break;
		} 		
	} while (opcao != '0');
}

char menuCompromisso(void) {
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
	printf("///           1. Cadastrar um novo compromisso                            ///\n");
	printf("///           2. Pesquisar por compromisso ja cadastrado                  ///\n");
	printf("///           3. Atualizar dados de um compromisso                        ///\n");
	printf("///           4. Excluir um um compromisso do sistema                     ///\n");
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




void cadastrarCompromisso(void) {
	char tipo[51];
	char desc[200];
	char local[100];
	char horar[5];
	char infc[200];

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
	printf("///           Tipo:                                                       ///\n");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ ]", tipo);
	getchar();
	printf("///           Descricao:                                                  ///\n");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ ]", desc);
	getchar();
	printf("///           Local:                                                      ///\n");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ]", local);
	getchar();
	printf("///           Horario:                                                    ///\n");
	scanf("%[0-9:]", horar);
	getchar();
    printf("///           Informacoes complementares:                                 ///\n");
	scanf("%[A-ZÁÉÍÓÚÂÊÔÇÀÃÕ a-záéíóúâêôçàãõ ]", infc);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
}

void pesquisarCompromisso(void) {

}

void atualizarCompromisso(void) {

}

void excluirCompromisso(void) {

}