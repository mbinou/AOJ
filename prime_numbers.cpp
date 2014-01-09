#include <iostream>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

bool IsPrime(int n) {
  int i;
  if (n < 2) return false;
  else if (n == 2) return true;

  if(n%2 == 0) return false;

  for (i = 3; i <= n/i; i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}

int main () {
  int n, m, i, count = 0;
  cin >> n;
  rep(i,n) {
    cin >> m;
    if (IsPrime(m)) count++;
  }
  cout << count << endl;
}
