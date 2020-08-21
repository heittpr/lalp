/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/08
  Exercício:  5
*/

programa {
  inclua biblioteca Matematica --> mat

  funcao inicio() {
    real valor, prestacao

    escreva("Valor da compra: ")
    leia(valor)

    // calcula o valor da prestação dividindo o valor da compra por 5
    prestacao = valor / 5.0
    prestacao = mat.arredondar(prestacao, 2) // arredonda para duas casas de precisao
    
    escreva("Valor das Prestações: R$ ", prestacao)
  }
}
