// Positivos e Média

#include <iostream>
using namespace std;

int main() {
  int par, impar, positivo, negativo, tmp;
  par = impar = positivo = negativo = 0;

  for (int i = 0; i < 5; i++) {
    cin >> tmp;
    
    if   (tmp%2) impar++;
    else         par++;

    if      (tmp  > 0) positivo++;
    else if (tmp != 0) negativo++;
  }

  cout << par      << " valor(es) par(es)"     << endl;
  cout << impar    << " valor(es) impar(es)"   << endl;
  cout << positivo << " valor(es) positivo(s)" << endl;
  cout << negativo << " valor(es) negativo(s)" << endl;
}
