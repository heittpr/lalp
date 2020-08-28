programa {
  funcao inicio() {
    inteiro numero

    escreva("Digite um numero inteiro: ")
    leia(numero)

    se (numero % 7 == 0) {
      escreva(numero, " eh divisivel por 7\n")
    } senao {
      escreva(numero, " NAO eh divisivel por 7\n")
    }
  }
}
