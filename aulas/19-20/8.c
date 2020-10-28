/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/10
  Exercício:  8
*/

#include <stdio.h>
#include <string.h>

int main() {
  char palavra[51];
  fgets(palavra, 51, stdin);

  for (int i = 0; i < strlen(palavra)-1; i++) {
    printf("%c", palavra[i] + 1);
  }

  printf("\n");
  return 0;
}
