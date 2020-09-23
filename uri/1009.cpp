// Salário com Bônus

#include <iostream>
using namespace std;

int main() {
  double salario, vendas;

  cin.ignore(100, '\n');
  cin >> salario >> vendas;
  
  cout.precision(2);
  cout << fixed;
  cout << "TOTAL = R$ " << salario + (double) 15/100 * vendas << endl;
}
