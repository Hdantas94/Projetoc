// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include "relatorio.h"
// #include "funcoes.h"
// #include "funcionario.h"
// #include "tarefa.h"


// void moduloRelatorio(void) {
// 	char opcao;
// 	do {
// 		opcao = menuRelatorio();
// 		switch(opcao) {
// 			//case '1': 	relatorioTarefaCadastrada();
// 			//			break;
// 			case '2': 	funcionarioCadastrado();
// 						break;
// 			//case '3': 	relatorioTarefaPorData();
// 			//			break;
// 		} 		
// 	} while (opcao != '0');
// }

// void funcionarioCadastrado(void) {
// 	char* cpf;
// 	cpf = telaFuncionarioCadastrado();
//    listarelatorioFuncionarioCadastrado(cpf);
//    free(cpf);
// }


// char menuRelatorio(void) {
// 	char op;
//    system("cls");
// 	printf("\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///          ===================================================          ///\n");
// 	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
// 	printf("///          = = = =   Agenda de Tarefas e Compromissos  = = = =          ///\n");
// 	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
// 	printf("///          ===================================================          ///\n");
// 	printf("///                Developed by  @Hdantas94 - 2021                        ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///           = = = = = = = =  Menu Relatorio = = = = = = = =             ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           1. Listar Tarefas Cadastradas                               ///\n");
// 	printf("///           2. Listar Funcionarios Cadastrados                          ///\n");
// 	printf("///           3. Listar tarefas por data                                  ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           0. Voltar ao menu anterior                                  ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           Escolha a opcao desejada: ");
// 	scanf("%c", &op);
// 	getchar();
// 	printf("///                                                                       ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("\n");
// 	return op;
// }

// char* telaFuncionarioCadastrado(void) {
//    system("cls");
// 	printf("\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///          ===================================================          ///\n");
// 	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
// 	printf("///          = = = =   Agenda de Tarefas e Compromissos  = = = =          ///\n");
// 	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
// 	printf("///          ===================================================          ///\n");
// 	printf("///                Developed by  @Hdantas94 - Jan, 2021                  ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///           = = = = = = =    Funcionarios     = = = = = = =             ///\n");
// 	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("///           ===============================================             ///\n");
//  	printf("///           ||     CPF        ||         nome            ||             ///\n");
//  	printf("///           ===============================================             ///\n");
//      listaRelatorioFuncionarioCadastrado(cpf);
// 	printf("///                                                                       ///\n");
// 	printf("///                                                                       ///\n");
// 	printf("/////////////////////////////////////////////////////////////////////////////\n");
// 	printf("\n");
//    printf("///           Tecle <ENTER> para continuar...                             ///");
//    getchar();
// }

// void listaRelatorioFuncionarioCadastrado(char* cpf) {
//    FILE* fp;
//    Funcionario* func;
//    char nomef[26];
//    int tam;

//    func = (Funcionario*) malloc(sizeof(Funcionario));
//    fp = fopen("funcionario.dat", "rb");
//    while (fread(func, sizeof(Funcionario), 1, fp)) {
//        if (strcmp(func->cpf, cpf) == 0) {
//            tam = strlen(func->nome);
//            strncpy(nomef, func->nome, tam);
//            for (int i = tam; i < 25; i++) {
//                nomef[i] = ' ';
//            }
//           nomef[25] = '\0';
//            printf("///           ||     %-20s     || %-12s ||             ///\n", func->nome, cpf);
//        }
//    }
//    fclose(fp);
//    free(func);
// }




