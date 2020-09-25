// Positivos e Média

#include <iostream>
using namespace std;

int main() {
  int total=0;
  float tmp, soma=0;

  for (int i = 0; i < 6; i++) {
    cin >> tmp;
    
    if (tmp > 0) {
      soma += tmp;
      total++;
    }
  }

  cout.precision(1); cout << fixed;
  cout << total << " valores positivos\n";
  cout << soma / total << endl;
}
