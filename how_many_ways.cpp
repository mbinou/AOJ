#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  int n, x, count;
  int i, j, k;

  while (1) {
    cin >> n >> x;
    if (n == 0 && x == 0) break;
    count = 0;
    rep(i,n) {
      REP(j,i+1,n) {
	REP(k,j+1,n) {
	  if (i + j + k + 3 == x) {
	    count++;
	  }
	}
      }
    }
    cout << count << endl;
  }
  return 0;
}
