// Números Positivos

#include <iostream>
using namespace std;

int main() {
  int res = 0;
  float tmp;

  for (int i = 0; i < 6; i++) {
    cin >> tmp;
    
    if (tmp > 0)
      res++;
  }

  cout << res << " valores positivos\n";
}
