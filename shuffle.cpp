#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main () {
  string cards;
  int m, h;
  int i;

  while (1) {
    cin >> cards;
    if (cards == "-") break;
    cin >> m;
    rep(i,m) {
      cin >> h;
      cards = cards.substr(h,cards.length()) + cards.substr(0,h);
    }
    cout << cards << endl;
  }
  return 0;
}
