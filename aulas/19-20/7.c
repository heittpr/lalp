/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/10
  Exercício:  7
*/

#include <stdio.h>
#include <string.h>

int main() {
  char frase[101];
  fgets(frase, 101, stdin);

  for (int i = 0; i < strlen(frase); i++) {
    if (frase[i] >= 97 && frase[i] <= 122)
      printf("%c", frase[i]-32);
    else
      printf("%c", frase[i]);
  }

  return 0;
}
