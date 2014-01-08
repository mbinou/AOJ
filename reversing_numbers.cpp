#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  int n, a[100];
  int i;
  cin >> n;
  rep(i,n) {
    cin >> a[i];
  }
  rep(i,n) {
    cout << a[n-1-i];
    if (i < n-1) {
      cout << " ";
    }
  }
  cout << endl;
  return 0;
}
