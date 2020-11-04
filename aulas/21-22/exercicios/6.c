/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/10
  Exercício:  6
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

#define max(a,b) (a > b ? a : b)

int main() {
  int a[5][3],  b[5][3], c[5][3];

  // define uma seed com base no tempo do sistema
  srand(time(NULL));

  // popula as matrizes
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 3; j++)
      a[i][j] = (rand() % 21) - 10;

  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 3; j++)
      b[i][j] = (rand() % 21) - 10;

  // calcula a matriz c
  for (int i = 0; i < 5; i++)
    for (int j = 0; j < 3; j++)
      c[i][j] = max(a[i][j], b[i][j]);

  // imprime as matrizes lado a lado
  printf("      a      \t      b      \t      c\n\n");
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 3; j++)
      printf("%3d ", a[i][j]);
    
    printf("\t");

    for (int j = 0; j < 3; j++)
      printf("%3d ", b[i][j]);

    printf("\t");

    for (int j = 0; j < 3; j++)
      printf("%3d ", c[i][j]);
    
    printf("\n");
  }
  
  return 0;
}
