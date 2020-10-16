/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       14/08
  Exercício:  3
*/

#include <stdio.h>

int main() {
  int v[8], i, j;

  // lê o vetor
  for (int p = 0; p < 8; p++)
    scanf(" %d", &v[p]);

  scanf(" %d", &i);
  scanf(" %d", &j);

  // verifica se i e j estão dentro do intervalo válido e imprime a soma v[i] + v[j]
  if (i >= 0 && i <= 7 && j >= 0 && j <= 7)
    printf("v[i] + v[j] = v[%d] + v[%d] = %d + %d = %d\n", i, j, v[i], v[j], v[i] + v[j]);
  else
    printf("posição inválida\n");

  return 0;
}
