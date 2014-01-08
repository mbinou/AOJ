#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


bool strcmp_ignore(string s1, string s2) {
  int i;
  if (s1.length() != s2.length()) return false;
  rep(i, s1.length()) if (toupper(s1[i]) != toupper(s2[i])) return false; 
  return true;
}

int main () {
  string W, T;
  int count = 0;
  cin >> W;
  while (1) {
    cin >> T;
    if (T == "END_OF_TEXT") break;
    if (strcmp_ignore(W,T)) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
