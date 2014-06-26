#include<iostream>
#include<math.h>

using namespace std;

int main () {
  int i;
  long min = 1000000, max = -1000000, sum = 0, n, a;
  cin >> n;
  rep(i,n) {
    cin >> a;
    if (min > a) min = a;
    if (max < a) max = a;
    sum = sum + a;
  }
  cout << min << " " << max << " " << sum <<  endl;
}
