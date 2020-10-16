/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       14/08
  Exercício:  6
*/

#include <stdio.h>

int main() {
  int n, negativos, positivos, nulos;
  negativos = positivos = nulos = 0;

  for (int i = 0; i < 10; i++) {
    scanf(" %d", &n);

    if      (n > 0) positivos++;
    else if (n < 0) negativos++;
    else            nulos++;
  }

  printf("Positivos: %d\nNegativos: %d\nNulos: %d\n", positivos, negativos, nulos);
}
