#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define s 30

int main() {
  int vet[s];
  srand(time(NULL));

  for (int i = 0; i < s; i++)
    vet[i] = rand() % 100;

  printf("Vector gerado aleatoriamente:\n");
  for (int i = 0; i < s; i++)
    printf("V[%d] = %d\n", i, vet[i]);

  return 0;
}
