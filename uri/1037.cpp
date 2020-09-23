// Intervalo

#include <iostream>
#include <string>
#include <cmath>
using namespace std;

string intervalos[4] = {"[0,25]", "(25,50]", "(50,75]", "(75,100]"}; 

int main() {
  double n;
  cin >> n;

  int i = n == 0 ? 0 : ceil(n / 25) -1;

  if (i < 0 || i > 3)
    cout << "Fora de intervalo\n";
  else
    cout << "Intervalo " << intervalos[i] << endl;
}
