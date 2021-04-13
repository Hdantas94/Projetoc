typedef struct funcionario Funcionario;

struct funcionario {
  char cpf[12];
  char nome[51];
  char dataNasc[9];
  char email[31];
}



char menuFuncionario(void);
void moduloFuncionario(void);
void cadastrarFuncionario(void);
void pesquisarFuncionario(void);
void atualizarFuncionario(void);
void excluirFuncionario(void);