#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  int r, c, value, sum;
  int i, j;
  cin >> r >> c;
  int sheet[r+1][c+1];

  // input
  rep(i,r) {
    rep(j,c) {
      cin >> value;
      sheet[i][j] = value;
    }
  }

  // process1
  rep(i,r) {
    sum = 0;
    rep(j,c) { 
      sum += sheet[i][j];
    }
    sheet[i][c] = sum;
  }

  // process2
  rep(j,c+1) {
    sum = 0;
    rep(i,r) { 
      sum += sheet[i][j];
    }
    sheet[r][j] = sum;
  }

  // output
  rep(i,r+1) {
    rep(j,c+1) {
      cout << sheet[i][j];
      if (j < c) cout << " ";
    }
    cout << endl;
  }

  return 0;
}
