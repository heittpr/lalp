/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/10
  Exercício:  5
*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <limits.h>

int main() {
  int m[5][5], min = INT_MAX, max = INT_MIN;
  int min_i, min_j;
  int max_i, max_j;

  // define uma seed com base no tempo do sistema
  srand(time(NULL));

  // popula e imprime a matriz, e encontra
  // seu maior e menor elementos
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      m[i][j] = (rand() % 201) - 100;
      printf("%5d", m[i][j]);

      if (m[i][j] < min) {
        min_i = i, min_j = j;
        min = m[i][j];
      }

      if (m[i][j] > max) {
        max_i = i, max_j = j;
        max = m[i][j];
      }
    }
    printf("\n");
  }

  printf("\nMenor Elemento: %5d (%d, %d)", min, min_i, min_j);
  printf("\nMaior Elemento: %5d (%d, %d)", max, max_i, max_j);
  
  printf("\n");
  return 0;
}
