/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       16/09
  Exercício:  1
*/

#include <stdio.h>

int main() {
  int n;
  
  printf("Insira um número: ");
  scanf("%d", &n);

  if      (n == 5)                printf("%d é igual a 5", n);
  else if (n == 200)              printf("%d é igual a 200", n);
  else if (n == 400)              printf("%d é igual a 400", n);
  else if (n >= 500 && n <= 1000) printf("%d está entre 500 e 1000", n);
  else                            printf("%d não é igual a 5, 200 ou 400, nem entre 500 e 1000", n);

  printf("\n");
  return 0;
}
