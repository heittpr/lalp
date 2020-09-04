programa {
  funcao inicio() {
    // num vai de 17 até 255
    para (inteiro num = 17; num <= 255; num++) {
      // verifica se num é múltiplo de 13
      se (num % 13 == 0) {
        escreva(num, "\n")
      }
    }
  }
}
