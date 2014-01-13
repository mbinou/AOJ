#include <iostream>
#include <queue>
#include <cstdlib>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define N 100000
using namespace std;

struct process {
  char name[10];
  int t;
};

int main () {
  int n, q, i, sum = 0;
  queue<process> Q;
  process qu;
  
  // input
  cin >> n >> q;
  rep(i,n) {
    cin >> qu.name >> qu.t;
    Q.push(qu);
  }

  // process
  while (!Q.empty()) {
    qu = Q.front();
    Q.pop();
    if (qu.t <= q) {
      sum += qu.t;
      cout << qu.name << " " << sum << endl;
    } else {
      sum += q;
      qu.t -= q;
      Q.push(qu);
    }
  }
  return 0;
}
