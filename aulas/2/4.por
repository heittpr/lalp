/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/08
  Exercício:  4
*/

programa {
  inclua biblioteca Matematica --> mat

  funcao inicio() {
    real dolares, cotacao, total

    escreva("Quantidade total de dólares: ")
    leia(dolares)

    escreva("Cotação do dia: ")
    leia(cotacao)
    
    // calcula o valor em real multiplicando o total de dolares pela cotação do dia
    total = dolares * cotacao 
    total = mat.arredondar(total, 2) // arrendonda para duas casas de precisão

    escreva("\nTotal em Reais: R$ ", total)
  }
}
