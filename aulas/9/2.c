/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       16/09
  Exercício:  2
*/

#include <stdio.h>

int main() {
  int idade;
  
  printf("Insira a sua idade: ");
  scanf("%d", &idade);

  printf("Você é ");

  if      (idade < 16) printf("não eleitor");
  else if (idade < 18) printf("eleitor facultativo");
  else if (idade < 70) printf("eleitor obrigatório");
  else                 printf("eleitor facultativo");

  printf(".\n");
  return 0;
}
