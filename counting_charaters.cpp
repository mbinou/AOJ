#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  int count[26] = {0};
  int i;
  char ch;

  while (cin >> ch) {
    ch = tolower(ch);
    count[ch - 'a']++;
  }

  rep(i,26) {
    cout << (char)(i+'a') << " : " << count[i];
    cout << endl;
  }
  return 0;
}
