#include<iostream>
#include<math.h>

#define REP(i,a,b) for(i=a;i<b;i++)

using namespace std;

int main () {
  int a, b, c, i, cnt = 0;
  cin >> a >> b >> c;

  REP(i, a, b+1) {
    if (c % i == 0) cnt++;
  }
  cout << cnt << endl;
}
