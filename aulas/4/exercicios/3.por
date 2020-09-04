/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/08
  Exercício:  3
*/

programa {
  funcao inicio() {
    inteiro n

    escreva("Insira um número: ")
    leia(n)

    escreva("O número ")

    // determina se n não é divisível por 3
    se (n % 3 != 0) { escreva("não ") }

    escreva("é múltiplo de três")
  }
}
