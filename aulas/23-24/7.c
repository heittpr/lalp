#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <ctype.h>

int m[10][10];
int l[10], c[10];

int main() {
  // define uma seed com base no tempo do sistema
  srand(time(NULL));

  // popula e imprime a matriz e calcula
  // a soma das suas linhas e colunas
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      m[i][j] = rand()%11;
      printf("%3d", m[i][j]);

      l[i] += m[i][j];
      c[j] += m[i][j];
    }
    printf("\n");
  }
  printf("\n");

  char op, tipo;
  int indice;
  
  // lê as escolhas do usuário
  do {
    printf("Escolha uma operação:\n - (M)édia\n - (S)oma\n");
    scanf(" %c", &op);
    op = tolower(op);
  } while (op != 'm' && op != 's');

  printf("\n");

  do {
    printf("Deseja realiza-la em uma (L)inha ou (C)oluna? ");
    scanf(" %c", &tipo);
    tipo = tolower(tipo);
  } while (tipo != 'l' && tipo != 'c');

  do {
    printf("Informe o índice (0-9): ");
    scanf(" %d", &indice);
  } while (indice < 0 || indice > 9);
  
  printf("\n");

  // imprime o resultado
  if (op == 'm') {
    if (tipo == 'l')
      printf("Média da linha %d: %.2f\n", indice, l[indice]/10.0);
    else
      printf("Média da coluna %d: %.2f\n", indice, c[indice]/10.0);
  } else {
    if (tipo == 'l')
      printf("Soma da linha %d: %d\n", indice, l[indice]);
    else
      printf("Soma da coluna %d: %d\n", indice, c[indice]);
  }
}
