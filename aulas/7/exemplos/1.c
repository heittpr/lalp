/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exemplo:    1
  Descrição:  Imprime na tela a mensagem de boas vindas. Faz a soma de dois números.
*/

#include <stdio.h>

int main() {
  int x, y, soma;
  printf("Bem vindo a Programacao em C!!!\n");
  printf("Aula pratica da disciplina: LALP\n\n");
  
  printf("Digite um numero: ");
  scanf("%d", &x);
  
  printf("Digite outro numero: ");
  scanf("%d", &y);

  soma = x + y;

  printf("\nA soma de %d com %d eh: %d \n", x, y, soma);
  return 0;
}
