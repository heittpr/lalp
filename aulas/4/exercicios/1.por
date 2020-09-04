/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       28/08
  Exercício:  1
*/

programa {
  funcao inicio() {
    inteiro dividendo, divisor, quociente, resto

    escreva("Insira o dividendo: ")
    leia(dividendo)

    escreva("Insira o divisor: ")
    leia(divisor)

    // calcula o quociente e o resto
    quociente = dividendo / divisor
    resto = dividendo % divisor

    escreva( "\nDividendo:  " , dividendo )
    escreva( "\nDivisor:    " , divisor   )
    escreva( "\nQuociente:  " , quociente )
    escreva( "\nResto:      " , resto     )
  }
}
