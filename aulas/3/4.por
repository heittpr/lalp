/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       26/08
  Exercício:  4
*/

programa {
  inclua biblioteca Matematica --> mat

  funcao inicio() {
    real preco, total
    inteiro qtd

    escreva("Insira o preço do produto: ")
    leia(preco)
    escreva("Insira a quantidade: ")
    leia(qtd)

    // calcula o total
      total = preco * qtd

    escreva("Total: R$", total)

    // verifica se o total comprado é maior ou igual a R$500,00
    se (total >= 500) {
      real desconto, final

      // calcula o desconto multiplicando o total por 15%
      desconto = 15.0/100.0 * total
      desconto = mat.arredondar(desconto, 2) // arredonda para duas casas

      // calcula o total a pagar subtraindo o desconto do total
      final = total - desconto
      final = mat.arredondar(final, 2) // arredonda para duas casas

      escreva("\nDesconto: R$", desconto)
      escreva("\nTotal a pagar: R$", final)
    }
  }
}
