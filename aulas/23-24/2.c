/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       04/11
  Exercício:  2
*/

#include <stdio.h>

int main() {
  int x[10];

  // lê o vetor
  for (int i = 0; i < 10; i++)
    scanf(" %d", &x[i]);

  // faz as substituições
  for (int i = 0; i < 10; i++)
    if (x[i] <= 0) x[i] = 1;

  // imprime o vetor
  for (int i = 0; i < 10; i++)
    printf("x[%d] = %d\n", i, x[i]);
}
