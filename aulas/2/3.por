/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       21/08
  Exercício:  3
*/

programa { 
  funcao inicio() {
    real atual, desconto, final

    escreva("Preço atual: ")
    leia(atual)

    desconto = 1/10.0 * atual   // multiplica 10% e o valor atual para calcular o desconto
    final = atual - desconto    // subtrai o desconto do valor atual para calcular o valor final

    escreva("\nDesconto: R$", desconto)
    escreva("\nValor Final: R$", final)
  }
}
