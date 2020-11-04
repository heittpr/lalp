/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/10
  Exercício:  2
*/

#include <stdio.h>

int main() {
  int res = 0;
  int m[3][3];
  float media;

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

  // calcula a media dos elementos
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      media += m[i][j];

  media /= 9;
  printf("\nMédia: %.2f\n", media);

  // conta os valores acima da média
  for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++)
      if (m[i][j] > media) res++;

  printf("%d elemento(s) está(ão) acima da média\n", res);
}
