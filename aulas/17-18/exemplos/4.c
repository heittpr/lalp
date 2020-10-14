#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define s 20

int main() {
  int vet[s], maior, menor, posMaior, posMenor;
  srand(time(NULL));

  maior = -1;
  menor = 101;
  posMenor = posMaior = -1;

  // popula o vetor com valores aleatorios
  // e encontra o maior e o menor deles
  for (int i = 0; i < s; i++) {
    vet[i] = rand() % 100;

    if (vet[i] > maior) {
      maior = vet[i];
      posMaior = i;
    } else if (vet[i] < menor) {
      menor = vet[i];
      posMenor = i;
    }
  }

  printf("Maior valor: %d - Posição %d\n", maior, posMaior);
  printf("Menor valor: %d - Posição %d\n", menor, posMenor);

  // imprime o vetor em ordem inversa
  for (int i = s-1; i >= 0; i--)
    printf("vet[%d]: %d\n", i, vet[i]);

  return 0;
}
