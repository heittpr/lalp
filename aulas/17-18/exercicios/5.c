/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       14/08
  Exercício:  5
*/

#include <stdio.h>

int main() {
  int v[10], res = 0;

  // lê o vetor
  for (int i = 0; i < 10; i++)
    scanf(" %d", &v[i]);

  // imprime as somas dos elementos nas posições ímpares
  for (int i = 1; i < 10; i += 2)
    res += v[i];

  printf("%d\n", res);
  return 0;
}
