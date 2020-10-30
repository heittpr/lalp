/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/10
  Exemplo:    2
  Descrição:  Ler uma matriz 3x4 e um número N. Imprimir a matriz e
              todas as posições em que o número N aparece.
*/

#include <stdio.h>

#define L 3
#define C 4

int main() {
  int mat[L][C], num;
  int i, j;

  for (i = 0; i < L; i++)
    for (j = 0; j < C; j++) {
      printf("Digite o valor de mat[%d][%d]: ", i, j);
      scanf("%d", &mat[i][j]);
    }

  printf("\nDigite o número pesquisado: ");
  scanf("%d", &num);

  printf("\n   - Matriz Digitada - \n");

  for (i = 0; i < L; i++) {
    for (j = 0; j < C; j++)
      printf("%5d", mat[i][j]);
    printf("\n");
  }

  printf("\nO número %d aparece nas seguintes posições: \n", num);

  for (i = 0; i < L; i++)
    for (j = 0; j < C; j++)
      if (mat[i][j] == num) printf("mat[%d][%d]\n", i, j);

  return 0;
}
