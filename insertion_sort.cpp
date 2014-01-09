#include <iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define N 1000

using namespace std;

void trace(int A[], int n) {
  int i;
  rep(i,n) {
    if(i > 0) cout << " ";
    cout << A[i];
  }
  cout << endl;
}

int main () {
  int n, A[N+1];
  int i, j, key;

  // input
  cin >> n;
  rep(j,n) cin >> A[j];
  
  // trace
  trace(A,n);
  // sort
  REP(j,1,n) {
    key = A[j];
    i = j - 1;
    while (i >= 0 && A[i] > key) {
      A[i+1] = A[i];
      i = i - 1;
    }
    A[i+1] = key;
    // output
    trace(A,n);
  }
  return 0;
}
