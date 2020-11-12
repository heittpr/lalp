#include <stdio.h>

int m[3][4];
int l[3], c[4];

int main() {
  // lê a matriz e calcula a
  // soma das linhas e colunas
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++) {
      scanf(" %d", &m[i][j]);

      l[i] += m[i][j];
      c[j] += m[i][j];
    }

  // imprime a matriz e as somas
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++)
      printf("%4d", m[i][j]);
    printf("\n");
  }

  printf("\n");
  for (int i = 0; i < 3; i++)
    printf("Soma da linha %d: %d\n", i, l[i]);

  printf("\n");
  for (int j = 0; j < 4; j++)
    printf("Soma da coluna %d: %d\n", j, c[j]);
}
