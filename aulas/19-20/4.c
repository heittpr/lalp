/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/10
  Exercício:  4
*/

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
  bool vogal;                                 // indica se um caractere é uma vogal 
  char frase[101];                            // a frase a ser lida
  char vogais[5] = {'a', 'e', 'i', 'o', 'u'}; // caracteres considerados vogais
  char sub;                                   // caractere pare substituir as vogais

  // lê a frase e o caractere de substituição
  fgets(frase, 101, stdin);
  scanf(" %c", &sub);

  // para todo caractere na frase
  for (int i = 0; i < strlen(frase)-1; i++) {
    // defina-o como não vogal
    vogal = false;

    // para toda vogal na lista
    for (int j = 0; j < 5; j++)
      // se o caractere for essa vogal
      if (frase[i] == vogais[j]) {
        vogal = true;       // defina-o como vogal
        printf("%c", sub);  // imprime o caractere de substituição
        break;              // encerra o loop
      }

    // se o caractere nao foi definido como vogal, então imprima-o
    if (!vogal) printf("%c", frase[i]);
  }

  printf("\n");
  return 0;
}
