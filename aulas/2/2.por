/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/08
  Exercício:  2
*/

programa {
  funcao inicio() {
    inteiro sanduiche, suco, doce, total

    escreva("Sanduíche: ")
    leia(sanduiche)

    escreva("Suco: ")
    leia(suco)

    escreva("Doce: ")
    leia(doce)

    // calcula o preço final multiplicando a quantidade de cada item pelo seu respectivo preço
    total = 5 * sanduiche + 2 * suco + doce
    escreva("Total: R$ ", total, ".00")
  }
}
