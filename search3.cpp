#include <iostream>
#include <set>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
#define N 10000
using namespace std;

int main () {
  std::cin.tie(0); // tie
  std::ios::sync_with_stdio(false); // sync
  int n, i;
  string command, str;
  set<string> S;

  cin >> n;
  rep(i,n) {
    cin >> command >> str;
    if (command == "insert") {
      S.insert(str);
    } else if (command == "find") {
      (S.find(str) != S.end())? cout << "yes" : cout << "no";
      cout << endl;
    }
  }
  return 0;
}
  
