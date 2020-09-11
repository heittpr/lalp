/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  4
*/

#include <stdio.h>
#include <math.h>

int main() {
  int a = 5, b = 10, c = -8;
  float d = 1.5;

  printf("a) %d\n", 2 * a % 3 - c);
  printf("b) %.1f\n", (float)b/3 + (pow(8, 4)) / (a+b));
  printf("c) %.1f\n", (30 % a * pow(3, c)) * -d);
  printf("d) %.1f\n", -c*-c + (d * 10)/a);
  printf("e) %.1f\n", sqrt(pow(a, (float)b/a)) + c * d);

  return 0;
}
