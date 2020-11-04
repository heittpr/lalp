/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/10
  Exercício:  5
*/

#include <stdio.h>

int main() {
  int tempo[5][5] = {
    {  0,  2, 11,  6, 15 },
    {  2,  0,  7, 12,  4 },
    { 11,  7,  0, 11,  8 },
    {  6, 12, 11,  0, 10 },
    { 15,  4,  8, 10,  0 }
  };

  int cidade, ultima, total = 0;
  scanf(" %d", &cidade);
  ultima = cidade;

  while (cidade != -1) {
    total += tempo[ultima][cidade];
    ultima = cidade;
    
    scanf(" %d", &cidade);
  }

  printf("%d\n", total);
}
