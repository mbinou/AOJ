#include<iostream>
#include<math.h>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int main () {
  int n, s[1000], i;
  double m, d;
  
  cout.precision(8);
  while (1) {
    cin >> n;
    if (n == 0) break;
    m = 0;
    d = 0;
    rep(i, n) {
      cin >> s[i];
      m += s[i];
    }
    m = m / n;
    rep(i, n) d += pow(s[i]-m, 2.0);
    d = sqrt(d / n);
    cout << fixed << d << endl;
  }
  return 0;
}
