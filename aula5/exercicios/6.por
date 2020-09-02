/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       02/09
  Exercício:  6
*/

programa {
  funcao inicio() {
    inteiro n

    escreva("Insira um número: ")
    leia(n)

    escreva("\nTabuada do número ", n, ":\n\n")

    // calcula todos os múltiplos de n até n × 10
    para (inteiro i = 1; i <= 10; i++)
      escreva(n, " × ", i, " = ", n * i, "\n")
  }
}
