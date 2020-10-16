/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       14/08
  Exercício:  7
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int v[100], n, res;

  // define uma seed com base no tempo atual
  srand(time(NULL));

  // popula o vetor
  for (int i = 0; i < 100; i++)
    v[i] = rand() % 101;

  printf("Insira um número: ");
  scanf(" %d", &n);

  // verifica quantos números do vetor são iguais a n
  for (int i = 0; i < 100; i++)
    if (v[i] == n) res++;

  printf("%d\n", res);
  return 0;
}
