/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       14/08
  Exercício:  8
*/

#include <stdio.h>

int main() {
  int v1[10], v2[10];
  char v3[10];
  float v4[10];

  // lê os vetores
  for (int i = 0; i < 10; i++) scanf(" %d", &v1[i]);
  for (int i = 0; i < 10; i++) scanf(" %d", &v2[i]);
  for (int i = 0; i < 10; i++) scanf(" %c", &v3[i]);

  // calcula o quarto vetor
  for (int i = 0; i < 10; i++)
    switch (v3[i]) {
      case '+': v4[i] =         v1[i] + v2[i]; break;
      case '-': v4[i] =         v1[i] - v2[i]; break;
      case '*': v4[i] =         v1[i] * v2[i]; break;
      case '/': v4[i] = (float) v1[i] / v2[i]; break;
    }

  // imprime os 4 vetores
  for (int i = 0; i < 10; i++) printf("%5d ",   v1[i]); printf("\n");
  for (int i = 0; i < 10; i++) printf("%5c ",   v3[i]); printf("\n");
  for (int i = 0; i < 10; i++) printf("%5d ",   v2[i]); printf("\n");
  for (int i = 0; i < 10; i++) printf("%5.2f ", v4[i]); printf("\n");
}
