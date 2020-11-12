/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       04/11
  Exercício:  1
*/

#include <stdio.h>
#include <string.h>
#include <limits.h>

int main() {
  char alunos[10][50];
  int notas[10];
  float media = 0;
  int maior_pos, maior = INT_MIN;

  // lê os nomes
  for (int i = 0; i < 10; i++) {
    printf("Insira o nome do aluno %d: ", i+1);
    fgets(alunos[i], 50, stdin);
    alunos[i][strlen(alunos[i])-1] = '\0'; // remove o '\n'
  }

  // lê as notas, salva a maior e acumula a soma
  for (int i = 0; i < 10; i++) {
    printf("Insira a nota do aluno %d: ", i+1);
    scanf(" %d", &notas[i]);

    if (notas[i] > maior) {
      maior = notas[i];
      maior_pos = i;
    }

    media += notas[i];
  }

  // calcula e mostra a média
  media /= 10;
  printf("\nMédia: %.2f\n", media);
  
  // mostra os alunos com nota abaixo da média
  printf("Abaixo da média:\n");
  for (int i = 0; i < 10; i++)
    if (notas[i] < media)
      printf(" - %s, nota: %d\n", alunos[i], notas[i]);

  // mostra o aluno com a maior nota
  printf("Maior nota: %s (%d)\n", alunos[maior_pos], maior);
}
