#include <iostream>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define N 2000
using namespace std;

bool solve (int n, int m, int A[], int max) {
  if (m < 0 || n > max) return false;
  else if (m == 0) return true;
  else return solve(n+1, m-A[n], A, max) || solve(n+1, m, A, max);
}

int main () {
  cin.tie(0); // tie
  ios::sync_with_stdio(false); // sync

  int n, q, i, m;
  int A[N];

  // input
  cin >> n;
  rep(i,n) cin >> A[i];

  cin >> q;
  rep(i,q) {
    cin >> m;
    (solve(0,m,A,n))? cout << "yes" : cout << "no";
    cout << endl;
  }
  return 0;
}
