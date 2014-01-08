#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  int m, r, f;
  
  while (1) {
    cin >> m >> r >> f;
    if (m == -1 && r == -1 && f == -1) {
      break;
    } else if (m == -1 || r == -1 || m + r < 30) {
      cout << 'F';
    } else if (m + r >= 80) {
      cout << 'A';
    } else if (m + r >= 65) {
      cout << 'B';
    } else if (m + r >= 50) {
      cout << 'C';
    } else {
      if (f >= 50) {
	cout << 'C';
      } else {
	cout << 'D';
      }
    }
    cout << endl;
  }
  return 0;
}
