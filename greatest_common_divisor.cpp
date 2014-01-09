#include <iostream>
using namespace std;

int gcd(int x, int y) {
  if (y == 0) return x;
  return gcd(y, x%y);
}   

int main () {
  int a, b;
  cin >> a >> b;
  (a > b)? cout << gcd(a,b) : cout << gcd(b,a);
  cout << endl;
  return 0;
}
