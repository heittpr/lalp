/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/10
  Exercício:  5
*/

#include <stdio.h>
#include <string.h>

int main() {
  char frase[101];
  fgets(frase, 101, stdin);

  for (int i = strlen(frase)-1; i >= 0; i--)
    printf("%c", frase[i]);

  printf("\n");
  return 0;
}
