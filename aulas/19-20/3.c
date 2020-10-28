/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/10
  Exercício:  3
*/

#include <stdio.h>
#include <string.h>

int main() {
  int res = 0;
  char frase[101];
  char vogais[5] = {'a', 'e', 'i', 'o', 'u'};

  fgets(frase, 101, stdin);

  for (int i = 0; i < strlen(frase); i++)
    for (int j = 0; j < 5; j++)
      if (frase[i] == vogais[j]) {
        res++;
        break;
      }

  printf("%d\n", res);
  return 0;
}
