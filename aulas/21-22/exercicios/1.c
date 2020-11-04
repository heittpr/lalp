/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/10
  Exercício:  1
*/

#include <stdio.h>

int main() {
  int m[3][3];

  // lê a matriz
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      scanf(" %d", &m[i][j]);

  // imprime a matriz
  printf("\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%3d ", m[i][j]);
    printf("\n");
  }

  // multiplica a matriz por 2
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      m[i][j] *= 2;

  // imprime o resultado
  printf("\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      printf("%3d ", m[i][j]);
    printf("\n");
  }
}
