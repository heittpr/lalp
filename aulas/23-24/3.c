/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       04/11
  Exercício:  3
*/

#include <stdio.h>

int main() {
  int t, n[1000];
  scanf("%d", &t);

  // preenche o vetor
  for (int i = 0; i < 1000; i++)
    n[i] = i%t;

  // imprime o vetor
  for (int i = 0; i < 1000; i++)
    printf("N[%d] = %d\n", i, n[i]);
}
