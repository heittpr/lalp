/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       16/09
  Exercício:  5
*/

#include <stdio.h>

int main() {
  float preco;
  int codigo;

  printf("Insira o preço e a condição de pagamento: ");
  scanf("%f %d", &preco, &codigo);
  printf("Valor a pagar: ");

  if      (codigo == 1) printf("R$ %.2f",     preco * (float) 85/100    );
  else if (codigo == 2) printf("R$ %.2f",     (float) 9/100 * preco     );
  else if (codigo == 3) printf("2 x R$ %.2f", preco/2                   );
  else if (codigo == 4) printf("2 x R$ %.2f", ((float) 11/10 * preco)/2 );

  printf("\n");
  return 0;
}
