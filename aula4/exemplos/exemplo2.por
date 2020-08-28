programa {
  funcao inicio() {
    inteiro num, centena, dezena, unidade, resto

    escreva("Digite um número inteiro de três digitos (entre 100 e 999): ")
    leia(num)

    // calcula a centena
    centena = num/100

    // calcula o resto da divisão
    resto = num % 100

    // calcula a dezena e a unidade
    dezena = resto / 10
    unidade = resto % 10

    escreva("\n- NUMERO DECOMPOSTO -")
    escreva("\nCentena: ", centena)
    escreva("\nDezena:  ", dezena)
    escreva("\nUnidade: ", unidade)
  }
}
