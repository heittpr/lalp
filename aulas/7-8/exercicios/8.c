/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  8
*/

#include <stdio.h>
#include <math.h>

int main() {
  int anos, meses, dias, total;

  printf("Entre com a quantidade de anos, meses e dias: ");
  scanf("%d %d %d", &anos, &meses, &dias);

  // calcula e imprimi o total de dias
  total = dias + meses * 30 + anos * 365;
  printf("Total de dias: %d\n", total);

  return 0;
}
