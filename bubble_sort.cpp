#include<iostream>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define N 100
using namespace std;

void trace(int A[], int n) {
  int i;
  rep(i,n) {
    cout << A[i];
    if (i < n-1) cout << " ";
  }
  cout << endl;
}

int main () {
  int n, A[N], count = 0;
  int i, j, tmp;
  // input
  cin >> n;
  rep(i,n)  cin >> A[i];

  // sort
  for (i = 0;i < n;i++) {
    for (j = n-1; j > i; j--) {
      if (A[j] < A[j-1]) {
	count++;
	tmp = A[j];
	A[j] = A[j-1];
	A[j-1] = tmp;
      }
    }
  }
  
  trace(A,n);
  cout << count << endl;
}
