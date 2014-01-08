#include<iostream>
#include<math.h>

using namespace std;

int main () {
  double x1, x2, y1, y2;
  double d;
  cin >> x1 >> y1 >> x2 >> y2;
  d = hypot(x1-x2, y1-y2);
  cout.precision(8);
  cout << fixed <<  d << endl;
  return 0;
}
