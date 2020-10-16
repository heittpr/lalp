/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       14/08
  Exercício:  2
*/

#include <stdio.h>

int main() {
  int u[10], v[10];;

  // lê o vetor u
  for (int i = 0; i < 10; i++)
    scanf(" %d", &u[i]);

  // salva o quadrado de cada elemento no vetor v
  for (int i = 0; i < 10; i++)
    v[i] = u[i]*u[i];

  // imprime o vetor v
  for (int i = 0; i < 10; i++)
    printf("%d ", v[i]);

  printf("\n");
  return 0;
}
