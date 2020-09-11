/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  5
*/

#include <stdio.h>
#include <math.h>

int main() {
  int a, b, c;

  printf("Insira três inteiros: ");
  scanf("%d %d %d", &a, &b, &c);

  printf("%d^3 \t\t = \t %d\n", a, a*a*a);
  printf("3*%d \t\t = \t %d\n", b, 3*b);
  printf("sqrt(%d) \t = \t %.2f\n", c, sqrt(c));

  return 0;
}
