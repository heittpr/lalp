// Fórmula de Bhaskara

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  double a, b, c, delta;

  cin >> a >> b >> c;
  delta = b*b - 4*a*c;

  cout.precision(5);
  cout << fixed;

  if (delta >= 0 && a != 0)
    cout << "R1 = " << (-b + sqrt(delta))/(2*a) << endl
         << "R2 = " << (-b - sqrt(delta))/(2*a) << endl;
  else
    cout << "Impossivel calcular\n";
}
