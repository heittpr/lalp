/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  2
*/

#include <stdio.h>

int main() {
  int n;
  
  printf("Insira a altura da árvore: ");
  scanf("%d", &n);
  printf("\n");

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j < n-i; j++) { printf(" "); }
    for (int j = 1; j < 2*i; j++) { printf("*"); }
    printf("\n");
  }

  for (int i = 0; i < n-2; i++) { printf(" "); }
  printf("/|\\\n");

  return 0;
}
