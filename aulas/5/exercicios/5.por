/*
  Centro Federal de Educação Tecnológica de Minas Gerais - Campus XI
  Laboratório de Algoritmos e Lógica de Programação
  
  Aluno:      Heitor Gonçalves Leite
  Aula:       02/09
  Exercício:  5
*/

programa {
  funcao inicio() {
    // i começa em 1006 (o primeiro inteiro entre 1000 e 2000
    // com resto 5 mod 11) e vai até 2000 em incrementos de 11
    para (inteiro i = 1006; i <= 2000; i += 11) escreva(i, " ")
  }
}
