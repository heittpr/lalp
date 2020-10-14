#include <stdio.h>

int main() {
  int vet[10];

  printf("Digite 10 números inteiros: ");
  for (int i = 0; i < 10; i++)
    scanf("%d", &vet[i]);

  printf("Números digitados:\n");
  for (int i = 0; i < 10; i++)
    printf("%d\n", vet[i]);

  return 0;
}
