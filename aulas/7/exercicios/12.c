/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  11
*/

#include <stdio.h>

int main() {
  int n;

  printf("Entre com um inteiro: ");
  scanf("%d", &n);

  printf("%d é ", n);

  if (n % 2) printf("ímpar e ");
  else       printf("par e ");

  if (n < 0) printf("negativo.\n");
  else       printf("positivo.\n");

  return 0;
}
