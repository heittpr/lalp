/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       16/09
  Exercício:  3
*/

#include <stdio.h>

int main() {
  int idade;
  
  printf("Insira a sua idade: ");
  scanf("%d", &idade);

  if (idade < 5) {
    printf("Idade inválida.");
    return 0;
  }

  printf("Categoria: ");
  
  if      (idade <= 7)  printf("Infantil A");
  else if (idade <= 10) printf("Infantil B");
  else if (idade <= 13) printf("Juvenil A");
  else if (idade <= 17) printf("Juvenil B");
  else                  printf("Adulto");

  printf(".\n");
  return 0;
}
