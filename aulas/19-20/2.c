/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/10
  Exercício:  2
*/

#include <stdio.h>

int main() {
  int i = 0;
  char nome[100];
  fgets(nome, 100, stdin);

  for (i = 0; nome[i] != '\0'; i++);
  printf("%d\n", i-1); // menos um para não contar o \n
  
  return 0;
}
