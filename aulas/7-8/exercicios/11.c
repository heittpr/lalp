/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  11
*/

#include <stdio.h>

int main() {
  int a, b;

  printf("Insira dois números inteiros: ");
  scanf("%d %d", &a, &b);

  // compara a com b
  if (a < b) printf("%d %d\n", a, b);
  else       printf("%d %d\n", b, a);

  return 0;
}
