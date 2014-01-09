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

void swap(int* a, int* b) {
  int tmp;
  tmp = *a;
  *a = *b;
  *b = tmp;
}

int main () {
  int n, A[N], count = 0;
  int i, j, mini;
  // input
  cin >> n;
  rep(i,n)  cin >> A[i];

  // sort
  rep(i,n) {
    mini = i;
    for (j = i; j < n; j++) {
      if (A[j] < A[mini]) mini = j;
    }
    if (mini != i) {
      count++;
      swap(A[i], A[mini]);
    }
  }
  trace(A,n);
  cout << count << endl;
}
