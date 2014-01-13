#include <iostream>
#include <set>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define N 10000
using namespace std;

int main () {
  std::cin.tie(0); // tie
  std::ios::sync_with_stdio(false); // sync
  int n, q, val;
  int count = 0, m, i;
  set<int> S;

  cin >> n;
  rep(i,n) {
    cin >> val;
    S.insert(val);
  }

  cin >> q;
  rep(i,q) {
    cin >> m;
    if (S.find(m) != S.end())  count++;
  }
  cout << count << endl;
  return 0;
}
  
