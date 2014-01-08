#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  string number;
  int i, sum;

  while (1) {
    cin >> number;
    if (number == "0") break;
    sum = 0;
    rep(i, number.length()) {
      sum += number.at(i) - '0';
    }
    cout << sum << endl;
  }

  return 0;
}
