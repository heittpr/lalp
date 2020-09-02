programa {
  funcao inicio() {
    real termo = 1.0, soma = 0.0

    para (inteiro i = 1; i <= 50; i++) {
      termo = termo * 2     // calcula 2^i
      soma = soma + termo   // acumula 2^i na soma total
    }

    escreva("Somatório: ", soma, "\n")
  }
}
