// Soma de Impares Consecutivos I

#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int x, y, m, n, res=0;
  cin >> x >> y;

  m = min(x, y)+1;
  n = max(x, y);

  for (int i = m%2 ? m : m + 1; i < n; i += 2)
    res += i;

  cout << res << endl;
}
