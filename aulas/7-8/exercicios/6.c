/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       09/09
  Exercício:  6
*/

#include <stdio.h>
#include <math.h>

int main() {
  float ax, ay, bx, by, d;

  printf("Insira as coordenadas do ponto A: ");
  scanf("%f %f", &ax, &ay);

  printf("Insira as coordenadas do ponto B: ");
  scanf("%f %f", &bx, &by);

  // calcula e imprime a distância
  d = sqrt(pow(bx - ax, 2) + pow(by - ay, 2));
  printf("\ndist(A, B) = %.2f\n", d);

  return 0;
}
