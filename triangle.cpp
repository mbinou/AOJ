#include<iostream>
#include<math.h>

using namespace std;

int main () {
  int a, b, C;
  double rad, S, L, h;
  cin >> a >> b >> C;
  rad = C * M_PI / 180;
  S = a * b * sin(rad) / 2;
  L = a + b + sqrt(a*a+b*b-2*a*b*cos(rad));
  h = b*sin(rad);

  cout.precision(8);
  cout << fixed << S << " " << L << " " << h << endl;
  return 0;
}
