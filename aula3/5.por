/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       26/08
  Exercício:  5
*/

programa {
  inclua biblioteca Matematica --> mat

  funcao inicio() {
    real a, b, c, delta

    escreva("Insira o primeiro coeficiente: ")
    leia(a)
    escreva("Insira o segundo coeficiente: ")
    leia(b)
    escreva("Insira o terceiro coeficiente: ")
    leia(c)

    // calcula o valor de delta
    delta = b*b - 4.0 * a * c

    // verifica se delta é maior ou igual a zero
    se (delta >= 0) {
      real x1, x2, raiz_delta

      // calcula a raiz de delta
      raiz_delta = mat.raiz(delta, 2.0)

      // calcula as raízes da equação
      x1 = (-b + raiz_delta)/(2*a)
      x1 = mat.arredondar(x1, 2) // arredonda para duas casas de precisão

      x2 = (-b - raiz_delta)/(2*a)
      x2 = mat.arredondar(x2, 2) // arredonda para duas casas de precisão

      escreva("As raízes da equação ", a, "x^2 + ", b, "x + ", c, " = 0 são: ", x1, " e ", x2)
    } senao {
      escreva("Não existem raízes reais.") 
    }
  }
}
