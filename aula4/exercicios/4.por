/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/08
  Exercício:  4
*/

programa {
  funcao inicio() {
    inteiro x

    escreva("Insira um número: ")
    leia(x)

    escreva("O número ")

    // determina se x não é divisível por 4 e 5 verificando seu resto mod 20
    se (x % 20 != 0) { escreva("não ") }

    escreva("é divisível por 4 e 5")
  }
}
