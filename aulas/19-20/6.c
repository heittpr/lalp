/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/10
  Exercício:  6
*/

#include <stdio.h>
#include <string.h>

int main() {
  int res = 0;
  char frase[101];
  fgets(frase, 101, stdin);

  for (int i = 0; i < strlen(frase); i++)
    if (frase[i] == ' ')
      res++;

  printf("%d\n", res);
  return 0;
}
