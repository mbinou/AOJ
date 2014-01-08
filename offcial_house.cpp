#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  int n;
  int count[4][3][10] = {{{0}}};
  int b, f, r, v;
  int i,j,k;

  // input
  cin >> n;
  rep(i,n) {
    cin >> b >> f >> r >> v;
    count[b-1][f-1][r-1] += v;
  }

  // output
  rep(i,4) {
    rep(j,3) {
      rep(k,10) {
	cout << " " << count[i][j][k];
      }
      cout << endl;
    }
    if (i < 3) {
      rep(k,20) {
	cout << '#';
      }
      cout << endl;
    }
  }
  return 0;
}
