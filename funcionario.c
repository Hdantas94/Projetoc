#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionario.h"
#include "funcoes.h"

typedef struct funcionario Funcionario;


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

void cadastrarFuncionario(void) {
	Funcionario* func;

	func = telaCadastrarFuncionario();
	gravarFuncionario(func);
	free(func);
}

void pesquisarFuncionario(void) {
	Funcionario* func;
	char* cpf;

	cpf = telaPesquisarFuncionario();
	func = buscarFuncionario(cpf);
	exibirFuncionario(func);
	free(func);
	free(cpf);
}

void atualizarFuncionario(void) {
	Funcionario* func;
	char* cpf;

	cpf = telaAtualizarFuncionario();
	func = buscarFuncionario(cpf);
	if (func == NULL) {
    	printf("\n\nFuncionario não encontrado!\n\n");
  	} else {
		func = telaCadastrarFuncionario();
		strcpy(func->cpf, cpf);
		regravarFuncionario(func);
		free(func);
	}
	free(cpf);
}

void excluirFuncionario(void) {
	Funcionario* func;
	char *cpf;

	cpf = telaExcluirFuncionario();
	func = (Funcionario*) malloc(sizeof(Funcionario));
	func = buscarFuncionario(cpf);
	if (func == NULL) {
    	printf("\n\nFuncionario não encontrado!\n\n");
  	} else {
		  func->status = False;
		  regravarFuncionario(func);
		  free(func);
	}
	free(cpf);
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
	printf("///           = = = = = = =  Menu funcionario   = = = = = = =             ///\n");
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
    ////printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	getchar();
	return op;
}

void telaErroArquivo(void) {
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
	////printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
	exit(1);
}




Funcionario* telaCadastrarFuncionario(void) {
	Funcionario *func;
	func = (Funcionario*) malloc(sizeof(Funcionario));

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
	printf("///           = = = = = =  Cadastrar funcionario  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	do {
	printf("///           Nome: ");
	scanf("%[^\n]", func->nome);
	getchar();
	} while(!validaNome(func->nome));
	////do {
	printf("///           CPF: ");
	scanf("%[^\n]", func->cpf);
	getchar();
	////} while(!validaCpf(func->cpf));
	printf("///           E-mail: ");
	scanf("%[^\n]", func->email);
	getchar();
	do {
	printf("///           Data de Nascimento: ");
	scanf("%[^\n]", func->dataNasc);
	getchar();
	} while(!validaData(func->dataNasc));
	func->status = True;
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	return func;
	
}

char* telaPesquisarFuncionario(void) {
	char* cpf;
	cpf = (char*) malloc(12*sizeof(char));
	
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
	printf("///           = = = = = =  Pesquisar funcionario  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("/// Informe o CPF do funcionario que deseja pesquisar: ");
	scanf("%[^\n]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	////printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	return cpf;
}


char* telaAtualizarFuncionario(void) {
	char* cpf;
	cpf = (char*) malloc(12*sizeof(char));
	
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
	printf("///           = = = = = =  Atualizar funcionario  = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("/// Informe o CPF do funcionario que deseja atualizar os dados: ");
	scanf("%[^\n]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	////printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	return cpf;

}

char* telaExcluirFuncionario(void) {
	char* cpf;
	cpf = (char*) malloc(12*sizeof(char));
	
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
	printf("///           = = = = = =   Excluir funcionario   = = = = = =             ///\n");
	printf("///           = = = = = = = = = = = = = = = = = = = = = = = =             ///\n");
	printf("///                                                                       ///\n");
	printf("/// Informe o CPF do funcionario que deseja excluir: ");
	scanf("%[^\n]", cpf);
	getchar();
	printf("///                                                                       ///\n");
	printf("///                                                                       ///\n");
	printf("/////////////////////////////////////////////////////////////////////////////\n");
	printf("\n");
	/////printf("\t\t\t>>> Tecle <ENTER> para continuar...\n");
	return cpf;

}

void gravarFuncionario(Funcionario* func) {
	FILE* fp;

	fp = fopen("funcionario.dat", "ab");
	if (fp == NULL) {
		telaErroArquivo();
	}
	fwrite(func, sizeof(Funcionario), 1, fp);
	fclose(fp);
}

Funcionario* buscarFuncionario(char* cpf) {
	FILE* fp;
	Funcionario* func;

	func = (Funcionario*) malloc(sizeof(Funcionario));
	fp = fopen("funcionario.dat", "rb");
	if (fp == NULL) {
		telaErroArquivo();
	}
	while(fread(func, sizeof(Funcionario), 1, fp)) {
		if ((strcmp(func->cpf, cpf) == 0) && (func->status == True)) {
			fclose(fp);
			return func;
		}
	}
	fclose(fp);
	return NULL;
}

void exibirFuncionario(Funcionario* func) {

	if (func == NULL) {
		printf("\n= = = Funcionario Nao Existe = = =\n");
	} else {
		printf("\n= = = Funcionario Cadastrado = = =\n");
		printf("CPF: %s\n", func->cpf);
		printf("Nome: %s\n", func->nome);
		printf("E-mail: %s\n", func->email);
		printf("Data de Nascimento: %s\n", func->dataNasc);
		////printf("Status: %d\n", func->status);
	}
	printf("\n\nTecle ENTER para continuar!\n\n");
	getchar();
}

void regravarFuncionario(Funcionario* func) {
	int achou;
	FILE* fp;
	Funcionario *funcLido;

	funcLido = (Funcionario*) malloc(sizeof(Funcionario));
	fp = fopen("funcionario.dat", "r+b");
	if (fp == NULL) {
		telaErroArquivo();
	}
	achou = False;
	while(fread(funcLido, sizeof(Funcionario), 1, fp) && !achou) {
		if (strcmp(funcLido->cpf, func->cpf) == 0) {
			achou = True;
			fseek(fp, -1*sizeof(Funcionario), SEEK_CUR);
        	fwrite(func, sizeof(Funcionario), 1, fp);
		}
	}
	fclose(fp);
	free(funcLido);
}