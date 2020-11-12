/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       04/11
  Exercício:  5
*/

#include <stdio.h>
#include <string.h>

int main() {
  char palavra[100];
  int tamanho;
  
  scanf("%s", palavra);
  tamanho = strlen(palavra);

  for (int i = 0; i < tamanho/2; i++)
    if (palavra[i] != palavra[tamanho-i-1]) {
      printf("A palavra \"%s\" não é um palíndromo.\n", palavra);
      return 0;
    }

  printf("A palavra \"%s\" é um palíndromo.\n", palavra);
}
