/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       04/11
  Exercício:  4
*/

#include <stdio.h>
#include <string.h>

int main() {
  char a[25], b[25], c[25];
  
  scanf("%s", a);
  scanf("%s", b);
  scanf("%s", c);

  if (strcmp(a, "vertebrado") == 0) { 
    if (strcmp(b, "ave") == 0) { 
      if (strcmp(c, "carnivoro") == 0)
        printf("aguia");
      else
        printf("pomba");
    } else { 
      if (strcmp(c, "onivoro") == 0)
        printf("homem");
      else
        printf("vaca");
    }
  } else { 
    if (strcmp(b, "inseto") == 0) {
      if (strcmp(c, "hematofago") == 0)
        printf("pulga");
      else
        printf("lagarta");
    } else {
      if (strcmp(c, "hematofago") == 0)
        printf("sanguessuga");
      else
        printf("minhoca");
    }
  }

  printf("\n");
  return 0;
}
