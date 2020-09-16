/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  9
*/

#include <stdio.h>

int main() {
  int total, horas, minutos, segundos;

  printf("Entre com a quantidade total de segundos: ");
  scanf("%d", &total);

  // calcula e imprimi a quantidade de horas, minutos e segundos
  horas = total / 3600;
  total -= horas * 3600;

  minutos = total / 60;
  total -= minutos * 60;

  segundos = total;

  printf("%dh %dm e %ds\n", horas, minutos, segundos);
  return 0;
}
