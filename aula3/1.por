/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       26/08
  Exercício:  1
*/

programa {
  inclua biblioteca Matematica --> mat

  funcao inicio() {
    real a, b, c
    
    escreva("Valor do primeiro cateto: ")
    leia(b)
    escreva("Valor do segundo cateto: ")
    leia(c)
    
    // calcula o valor da hipotenusa usando o teorema de pitágoras
    a = mat.raiz(b*b + c*c, 2.0)
    a = mat.arredondar(a, 2) // arredonda para duas casas de precisão

    escreva("A hipotenusa vale ", a, ".")
  }
}
