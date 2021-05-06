#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tarefa.h"
#include "funcoes.h"


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

void cadastrarTarefa(void) {
	Tarefa* trf;

	trf = telaCadastrarTarefa();
	gravarTarefa(trf);
	free(trf);
}

void pesquisarTarefa(void) {
	Tarefa* trf;
	char* codRespons;

	codRespons = telaPesquisarTarefa();
	trf = buscarTarefa(codRespons);
	exibirTarefa(trf);
	free(trf);
	free(codRespons);
}

void atualizarTarefa(void) {
	Tarefa* trf;
	char* codRespons;

	codRespons = telaAtualizarTarefa();
	trf = buscarTarefa(codRespons);
	if (trf == NULL) {
    	printf("\n\nTarefa não encontrada!\n\n");
  	} else {
		trf = telaCadastrarTarefa();
		strcpy(trf->codRespons, codRespons);
		regravarTarefa(trf);
		free(trf);
	}
	free(codRespons);
}

void excluirTarefa(void) {
	Tarefa* trf;
	char *codRespons;

	codRespons = telaExcluirTarefa();
	trf = (Tarefa*) malloc(sizeof(Tarefa));
	trf = buscarTarefa(codRespons);
	if (trf == NULL) {
    	printf("\n\nTarefa não encontrada!\n\n");
  	} else {
		  trf->status = False;
		  regravarTarefa(trf);
		  free(trf);
	}
	free(codRespons);
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
	printf("///           Escolha a opcao desejada: ");
	scanf("%c", &op);
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	getchar();
	return op;
}

void telaErroArquivoTarefa(void) {
	system("cls");
	printf("\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///          ===================================================          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          = = = =  Agenda de Tarefas e Compromissos   = = = =          ///\n");
	printf("///          = = = = = = = = = = = = = = = = = = = = = = = = = =          ///\n");
	printf("///          ===================================================          ///\n");
	printf("///                Developed by  @Hdantas94 - 2021                        ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("///                                                                       ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = = = = = =  Ops! Ocorreu em erro = = = = = =             ///\n");
	printf("///           = = =  Não foi possível acessar o arquivo = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///           = = =   Este programa será finalizado!    = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	getchar();
	exit(1);
}

Tarefa* telaCadastrarTarefa(void) {
	Tarefa *trf;
	trf = (Tarefa*) malloc(sizeof(Tarefa));

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
	do {
	printf("///           Tipo: ");
	scanf("%[^\n]", trf->tipo);
	getchar();
	} while (!validaNome(trf->tipo));
	printf("///          CPF do Responsavel: ");
	scanf("%[^\n]", trf->codRespons);
	getchar();
	do {
	printf("///           Data(dia, mes, ano): "); 
	scanf("%[^\n]", trf->data);
	getchar();
	} while(!validaData(trf->data));
	printf("///           Horario: "); 
	scanf("%[^\n]", trf->horario);
	getchar();
	do {
	printf("///           Prioridade(baixa,media ou alta): ");
	scanf("%[^\n]", trf->prioridade);
	getchar();
	} while(!validaNome(trf->prioridade));
	trf->status = True;
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	getchar();
	return trf;
}

char* telaPesquisarTarefa(void) {
	char* codRespons;
	codRespons = (char*) malloc(12*sizeof(char));
	
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
	printf("///           = = = = = =  Pesquisar Tarefa       = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("/// Informe o CPF do responsavel da tarefa que deseja pesquisar: ");
	scanf("%[^\n]", codRespons);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	return codRespons;
}

char* telaAtualizarTarefa(void) {
	char* codRespons;
	codRespons = (char*) malloc(12*sizeof(char));
	
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
	printf("///           = = = = = =  Atualizar tarefa = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("/// Informe o CPF do responsavel da tarefa que deseja atualizar os dados: ");
	scanf("%[^\n]", codRespons);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	return codRespons;

}

char* telaExcluirTarefa(void) {
	char* codRespons;
	codRespons = (char*) malloc(12*sizeof(char));
	
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
	printf("///           = = = = = =   Excluir Tarefa        = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("/// Informe o CPF do responsavel da tarefa que deseja excluir: ");
	scanf("%[^\n]", codRespons);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	return codRespons;

}

void gravarTarefa(Tarefa* trf) {
	FILE* fp;

	fp = fopen("tarefa.dat", "ab");
	if (fp == NULL) {
		telaErroArquivoTarefa();
	}
	fwrite(trf, sizeof(Tarefa), 1, fp);
	fclose(fp);
}

Tarefa* buscarTarefa(char* codRespons) {
	FILE* fp;
	Tarefa* trf;

	trf = (Tarefa*) malloc(sizeof(Tarefa));
	fp = fopen("tarefa.dat", "rb");
	if (fp == NULL) {
		telaErroArquivoTarefa();
	}
	while(fread(trf, sizeof(Tarefa), 1, fp)) {
		if ((strcmp(trf->codRespons, codRespons) == 0) && (trf->status == True)) {
			fclose(fp);
			return trf;
		}
	}
	fclose(fp);
	return NULL;
}

void exibirTarefa(Tarefa* trf) {

	if (trf == NULL) {
		printf("\n= = = Tarefa Nao Existe = = =\n");
	} else {
		printf("\n= = = Tarefa Cadastrada = = =\n");
		printf("CPF Responsavel: %s\n", trf->codRespons);
		printf("Data: %s\n", trf->data);
		printf("Tipo: %s\n", trf->tipo);
		printf("Horario: %s\n", trf->horario);
		printf("Prioridade: %s\n", trf->prioridade);
	}
	getchar();
}

void regravarTarefa(Tarefa* trf) {
	int achou;
	FILE* fp;
	Tarefa *trfLido;

	trfLido = (Tarefa*) malloc(sizeof(Tarefa));
	fp = fopen("tarefa.dat", "r+b");
	if (fp == NULL) {
		telaErroArquivoTarefa();
	}
	achou = False;
	while(fread(trfLido, sizeof(Tarefa), 1, fp) && !achou) {
		if (strcmp(trfLido->codRespons, trf->codRespons) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Tarefa), SEEK_CUR);
        	fwrite(trf, sizeof(Tarefa), 1, fp);
		}
	}
	fclose(fp);
	free(trfLido);
}