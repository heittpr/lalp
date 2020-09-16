/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       16/09
  Exercício:  4
*/

#include <stdio.h>

int main() {
  float peso, altura, imc;

  printf("Insira seu peso (kg) e altura (m): ");
  scanf("%f %f", &peso, &altura);
  
  imc = peso / (altura * altura);
  printf("Seu imc é %.2f\nVocê está ", imc);

  if      (imc < 18.5)  printf("abaixo do peso");
  else if (imc < 25)    printf("com peso normal");
  else if (imc < 30)    printf("acima do peso");
  else                  printf("obeso");
  
  printf(".\n");
  return 0;
}
