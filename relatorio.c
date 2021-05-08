#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "relatorio.h"
#include "funcoes.h"
#include "funcionario.h"
#include "tarefa.h"

typedef struct funcionario Funcionario;


void moduloRelatorio(void) {
	char opcao;
	do {
		opcao = menuRelatorio();
		switch(opcao) {
			case '1': 	funcionarioCadastrado();
						break;
			
		} 		
	} while (opcao != '0');
}

void funcionarioCadastrado(void) {
	char* cpfFunc;

	telaFuncionarioCadastrado(cpfFunc);
	free(cpfFunc);
}

char menuRelatorio(void) {
	char op;
    system("cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Hdantas94 -       2021                  ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = = =  Menu Relatório = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Listar Funcionarios Cadastrados                          ///\n");
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

void telaFuncionarioCadastrado(char* cpfFunc) {

	system("cls");
	printf("\n");
	printf("///           ===============================================             ///\n");
	printf("///           ||        Funcionarios Cadastrados           ||             ///\n");
    printf("///           ===============================================             ///\n");
	listaFuncionarioCadastrado(cpfFunc);
	printf("\n");



}

void listaFuncionarioCadastrado(char* cpfFunc) {
    FILE* fp;
    Funcionario* func;
    char nomeFunc[50];
    int tam;

    func = (Funcionario*) malloc(sizeof(Funcionario));
    fp = fopen("funcionario.dat", "rb");
    while (fread(func, sizeof(Funcionario), 1, fp)) {
        if (strcmp(func->cpf, cpfFunc) == 0) {
            tam = strlen(func->nome);
            strncpy(nomeFunc, func->nome, tam);
            for (int i = tam; i < 49; i++) {
                nomeFunc[i] = ' ';
            }
            nomeFunc[49] = '\0';
            printf("///           ||     %-12s     || %-49s                      || ///\n", func->cpf, nomeFunc);
        }
    }
    fclose(fp);
    free(func);
}



