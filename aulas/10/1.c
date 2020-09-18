/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       18/09
  Exercício:  1
*/

#include <stdio.h>

int main() {
  int n;
  char meses[12][10] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
 
  printf("Insira o número do mês: ");
  scanf("%d", &n);

  if (n > 12 || n < 1)
    printf("Mês inválido.\n");
  else
    printf("%s\n", meses[n-1]);

  return 0;
}
