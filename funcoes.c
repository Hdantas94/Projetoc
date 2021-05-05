#include <time.h>
#include <stdlib.h>
#include <string.h>



//função que verifica se é digito
//função adaptado de @flgorgonio
int isDigito(char c) {
  if (c >= '0' && c <= '9') {
    return 1;
  } else {
    return 0;
  }
}

//função que verifica se é letra
//função adaptado de @flgorgonio
int isLetra(char c) {
  if (c >= 'A' && c <= 'Z') {
    return 1;
  } else if (c >= 'a' && c <= 'z') {
    return 1;
  } else {
    return 0;
  }
}

//função que texta se ano é bissexto
//função adaptado de @flgorgonio
int isBissexto(int aa) {
  if ((aa % 4 == 0) && (aa % 100 != 0)) {
    return 1;
  } else if (aa % 400 == 0) {
    return 1;
  } else {
    return 0;
  }
}

//funçõa que verifica se a data é válida
//função adaptado de @flgorgonio
int isData(int dd, int mm, int aa) {
  int maiorDia;
  if (aa < 0 || mm < 1 || mm > 12)
    return 0;
  if (mm == 2) {
    if (isBissexto(aa)) 
      maiorDia = 29;
    else
      maiorDia = 28;
  } else if (mm == 4 || mm == 6 || mm == 9 || mm == 11) {
    maiorDia = 30;
  } else
    maiorDia = 31;
  if (dd < 1 || dd > maiorDia)
    return 0;
  return 1;
}


//função que valida se foi um nome digitado
//função adaptado de @flgorgonio
int validaNome(char* nome) {
  for (int i=0; nome[i]!='\0'; i++) {
    if (!isLetra(nome[i])) {
      return 0;
    }
  }
	return 1;
}


//função que valida se a data ta no formato dia, mês e ano
//função adaptado de @flgorgonio
int validaData(char* data) {
  int tam, dia, mes, ano;
  tam = strlen(data);
  if (tam != 8) {
    return 0;
  }
  for (int i = 0; i < tam; i++) {
    if (!isDigito(data[i])) {
      return 0;
    }
  }
  dia = (data[0] - '0') * 10 + (data[1] - '0');
  mes = (data[2] - '0') * 10 + (data[3] - '0');
  ano = (data[4] - '0') * 1000 + (data[5] - '0') * 100 + 
        (data[6] - '0') * 10 + (data[7] - '0');
  if (!isData(dia, mes, ano)) {
    return 0;
  }
  return 1;
}


//função que válida cpf
//função adaptado de @flgorgonio
int validaCpf(char cpfLido[]) {
  int tam, soma, d1, d2;
  int cpfInt[11];

  tam = strlen(cpfLido);
  if (tam != 11) {
    return 0;
  }
  for (int i = 0; i < 11; i++) {
    if (cpfLido[i] < '0' || cpfLido[i] > '9') {
      return 0;
    }
  }
  for (int i = 0; i < 11; i++) {
    cpfInt[i] = cpfLido[i] - '0';
  }

  soma = 0;
  for (int i = 0; i < 9; i++) {
    soma += cpfInt[i] * (10 - i);
  }
  d1 = 11 - (soma % 11);
  if (d1 == 10 || d1 == 11) {
    d1 = 0;
  }
  if (cpfInt[9] != d1) {
    return 0;
  }

  soma = 0;
  for (int i = 0; i < 10; i++) {
    soma += cpfInt[i] * (11 - i);
  }
  d2 = 11 - (soma % 11);
  if (d2 == 10 || d2 == 11) {
    d2 = 0;
  }
  if (cpfInt[10] != d2) {
    return 0;
  }
  
  return 1;
}