/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       26/08
  Exercício:  2
*/

programa {
  funcao inicio() {
    inteiro n

    escreva("Insira um número: ")
    leia(n)

    // verifica se n é positivo ou negativo
    se (n >= 0) {
      escreva(n, " é positivo.")
    } senao {
      escreva(n, " é negativo.")
    }
  }
}
