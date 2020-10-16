/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       14/08
  Exercício:  1
*/

#include <stdio.h>

int main() {
  int v[10];

  for (int i = 0; i < 10; i++) scanf(" %d", &v[i]); // lê o vetor
  for (int i = 9; i > -1; i--) printf("%d ", v[i]); // imprime-o na ordem inversa
  
  printf("\n");
  return 0;
}
