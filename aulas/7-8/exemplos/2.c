/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exemplo:    2
  Descrição:  Utilização de espaçamento horizontal com "\t"
*/

#include <stdio.h>

int main() {
  char nome[50];
  int idade;

  // Lê um conjunto de caracteres
  printf("Digite seu nome: ");
  scanf("%s", &nome);

  // Lê um inteiro
  printf("Digite sua idade: ");
  scanf("%d", &idade);

  // espaçamento horizontal com "\t"
  printf("Nome: %s \t\t\t Idade: %d\n", nome, idade);

  return 0;
}
