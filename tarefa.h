
typedef struct tarefa Tarefa;

struct tarefa {
  char tipo;
  char codRespons[12];
  char data[9];
  char horario[12];
  char prioridade;
  int status;
};




void moduloTarefa(void);
char menuTarefa(void);

Tarefa* telaCadastrarTarefa(void);
char* telaPesquisarTarefa(void);
char* telaAtualizarTarefa(void);
char* telaExcluirTarefa(void);
void telaErroArquivo(void);

void cadastrarTarefa(void);
void pesquisarTarefa(void);
void atualizarTarefa(void);
void excluirTarefa(void);
void gravarTarefa(Tarefa*);

void exibirTarefa(Tarefa*);
Tarefa* buscarTarefa(char*);
void regravarTarefa(Tarefa*);