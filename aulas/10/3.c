/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       18/09
  Exercício:  3
*/

#include <stdio.h>

int main() {
  int qtd, codigo;
  float preco;
  
  printf("Insira o código do produto e a quantidade comprada: ");
  scanf("%d %d", &codigo, &qtd);
  
  switch (codigo) {
    case 1001:
    case 987:
      preco = 5.32;
      break;
    case 1324:
    case 7623:
      preco = 6.45;
      break;
    case 6548: preco = 2.37;
      break;
    default:
      printf("Código Inválido.\n");
      return 0;
  }
  
  printf("Total a pagar: R$%.2f\n", qtd * preco);
  return 0;
}
