
#include <stdio.h>
#include <stdlib.h>
#include "compromisso.h"
#include "tarefa.h"



char menuPrincipal(void);
void moduloInformacoes(void);
void menuSobre(void);



int main(void) {
		char opcao;
		do {
			opcao = menuPrincipal();
			switch(opcao) {
				case '1': moduloTarefa();
								 break;
				case '2': moduloCompromisso();
								 break;
				case '3': menuSobre();
								 break;
			}

		} while (opcao != '0');
	    return 0;



}

char menuPrincipal(void) {
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
	printf("///           = = = = = = = =  Menu Principal = = = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("///           1. Modulo tarefa                                            ///\n");
	printf("///           2. Modulo compromisso                                       ///\n");
	printf("///           4. Informacoes sobre o sistema                              ///\n");
	printf("///           0. Encerra o programa                                       ///\n");
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

void menuSobre(void) {
    system("cls");
    printf("\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///             Universidade Federal do Rio Grande do Norte                 ///\n");
    printf("///                 Centro de Ensino Superior do Serido                     ///\n");
    printf("///               Departamento de Computacao e Tecnologia                   ///\n");
    printf("///                  Disciplina DCT1106 -- Programacao                      ///\n");
    printf("///               Projeto Agenda de Tarefas e Compromissos                  ///\n");
    printf("///                Developed by  @Hdantas94 - Jan, 2021                     ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("///                                                                         ///\n");
    printf("///    = = = = = SIG-Task Agenda de Tarefas e Compromissos = = = = =        ///\n");
    printf("///                                                                         ///\n");
    printf("///  O seguinte projeto tem como objetivo desenvolver um programa de        ///\n");
    printf("///  computador que realize o agendamento de tarefas, de forma eficiente,   ///\n");
    printf("///  fornecendo lembretes aos usuarios sobre compromissos agendados.        ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///                                                                         ///\n");
    printf("///////////////////////////////////////////////////////////////////////////////\n");
    printf("\n");
    printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
    getchar();
}



