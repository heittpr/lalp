/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       26/08
  Exercício:  3
*/

programa {
  inclua biblioteca Matematica --> mat

  funcao inicio() {
    real peso, altura, imc

    escreva("Insira sua altura (m): ")
    leia(altura)
    escreva("Insira seu peso (kg): ")
    leia(peso)

    // calcula o imc
    imc = peso/(altura*altura)
    imc = mat.arredondar(imc, 2) // arredonda para duas casas de precisão

    escreva("Seu IMC é ", imc, ".\n")

    // verifica se o imc está abaixo ou acima do limite
    se (imc < 25) {
      escreva("Você não está acima do peso.")
    } senao {
      escreva("Você está acima do peso.")
    }
  }
}
