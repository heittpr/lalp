/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/10
  Exercício:  3
*/

#include <stdio.h>

int main() {
  int m[3][5], n[3][5], k;

  // lê a matriz
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
      scanf(" %d", &m[i][j]);

  // lê o inteiro k
  scanf(" %d", &k);

  // multiplica a matriz por k
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 4; j++)
      n[i][j] = k * m[i][j];

  // imprime as matrizes lado a lado
  printf("\n        m       \t      %d * m\n\n", k);
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++)
      printf("%3d ", m[i][j]);
    
    printf("\t");

    for (int j = 0; j < 4; j++)
      printf("%3d ", n[i][j]);
    
    printf("\n");
  }

  printf("\n");
  return 0;
}
