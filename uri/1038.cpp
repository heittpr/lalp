// Lanche

#include <iostream>
using namespace std;

float precos[5] = {4, 4.5, 5, 2, 1.5};

int main() {
  int codigo, qtd;
  cin >> codigo >> qtd;

  cout.precision(2);
  cout << fixed;
  cout << "Total: R$ " << qtd * precos[codigo-1] << endl;
}
