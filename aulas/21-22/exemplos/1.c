/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/10
  Exemplo:    1
  Descrição:  Leitura e impressão de daods de uma matriz de inteiros.
*/

#include <stdio.h>

int main() {
  int matriz[2][3], i, j;

  for (i = 0; i < 2; i++)
    for (j = 0; j < 3; j++) {
      printf("Digite o valor de matriz[%d][%d]: ", i, j);
      scanf("%d", &matriz[i][j]);
    }

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++)
      printf("%5d", matriz[i][j]);
    printf("\n");
  }

  return 0;
}
