/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  7
*/

#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;
  float d;

  printf("Entre com três inteiros: ");
  scanf("%d %d %d", &a, &b, &c);

  // calcula e imprimi o valor de d
  d = (pow(a +b, 2) + pow(b + c, 2))/2;
  printf("d = %.2fd", d);

  return 0;
}
