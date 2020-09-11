/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  10
*/

#include <stdio.h>

int main() {
  float custo, venda;

  printf("Insira o custo de produção: ");
  scanf("%f", &custo);

  // calcula e imprimi o preço de venda (100 + 28 + 45)% do custo de produção
  venda = (float)(100 + 28 + 45)/100 * custo;
  printf("O preço de venda é %.2f\n", venda);

  return 0;
}
