
typedef struct tarefa Tarefa;

struct tarefa {
  char tipo;
  char desc[200];
  char codRespons[12];
  char data[9];
  char horario[12];
  char prioridade;
};




void moduloTarefa(void);
char menuTarefa(void);
void cadastrarTarefa(void);
void pesquisarTarefa(void);
void atualizarTarefa(void);
void excluirTarefa(void);