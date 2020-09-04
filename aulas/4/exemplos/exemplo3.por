programa {
  funcao inicio() {
    inteiro notaFinal, freq

    // lê a nota final e a frequência
    escreva("Digite a nota final e a frequencia: ")
    leia(notaFinal, freq)

    // testa e escreve se o aluno foi reprovado ou não
    se (notaFinal >= 60 e freq >= 75) {
      escreva("APROVADO\n")
    } senao {
      escreva("NÃO APROVADO\n")
    }
  }
}
