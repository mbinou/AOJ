#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;

int main () {
  string s, p;
  cin >> s >> p;
  s = s + s;
  if (s.find(p)!= string::npos) cout << "Yes" << endl;
  else cout << "No" << endl;
}
