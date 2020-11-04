/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/10
  Exercício:  7
*/

#include <stdio.h>

int main() {
  int m[5][5];

  // popula a diagonal principal
  // com 1's e imprime a matriz
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      m[i][j] = i == j;
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }

  return 0;
}
