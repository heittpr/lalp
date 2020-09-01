/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/08
  Exercício:  5
*/

programa {
  funcao inicio() {
    real a, b, c

    escreva("Insira três números:\n\n")
    leia(a, b, c)
    
    escreva("\nMaior número: ")

    se       (a >= b e a >= c) { escreva(a) }
    senao se (b >= a e b >= c) { escreva(b) }
    senao se (c >= a e c >= b) { escreva(c) }

    escreva("\nMenor número: ")

    se       (a <= b e a <= c) { escreva(a) }
    senao se (b <= a e b <= c) { escreva(b) }
    senao se (c <= a e c <= b) { escreva(c) }
  }
}
