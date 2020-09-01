/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/08
  Exercício:  2
*/

programa {
  funcao inicio() {
    inteiro n

    escreva("Insira um número: ")
    leia(n)
 
    escreva("O número ", n)

    // determina a paridade de n verificando seu resto por 2
    se (n % 2 == 0) { escreva(" é par."  ) }
    senao           { escreva(" é ímpar.") }
  }
}
