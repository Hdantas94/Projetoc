typedef struct funcionario Funcionario;

struct funcionario {
  char cpf[12];
  char nome[51];
  char dataNasc[9];
  char email[31];
  int status;
};

char menuFuncionario(void);
void moduloFuncionario(void);

Funcionario* telaCadastrarFuncionario(void);
char* telaPesquisarFuncionario(void);
char* telaAtualizarFuncionario(void);
char* telaExcluirFuncionario(void);
void telaErroArquivo(void);

void cadastrarFuncionario(void);
void pesquisarFuncionario(void);
void atualizarFuncionario(void);
void excluirFuncionario(void);
void gravarFuncionario(Funcionario*);
void exibirFuncionario(Funcionario*);
void regravarFuncionario(Funcionario *);

Funcionario* buscarFuncionario(char*);

