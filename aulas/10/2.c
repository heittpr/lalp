/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       18/09
  Exercício:  2
*/

#include <stdio.h>
#include <cmath>

int main() {
  float n;
  int operacao;

  printf("Insira um número real e o código da operação: ");
  scanf("%f %d", &n, &operacao);
  
  switch (operacao) {
    case 101: printf("%.2f\n", sqrt(n));
      break;
    case 102: printf("%.2f\n", n/2);
      break;
    case 103: printf("%.2f\n", (float)1/10 * n);
      break;
    case 104: printf("%.2f\n", n*2);
      break;
    default:
      printf("Operação Inválida\n");
  }
  
  return 0;
}
