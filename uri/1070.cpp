// Seis Números Ímpares

#include <iostream>
using namespace std;

int main() {
  int x;
  cin >> x;

  x = x%2 ? x : x+1;
  for (int i = x; i <= x+10; i += 2)
    cout << i << endl;
}
