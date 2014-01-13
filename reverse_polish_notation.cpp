#include <iostream>
#include <stack>
#include <cstdlib>

using namespace std;

int main () {
  int x, a, b;
  stack<int> st;
  string s;
  
  while (cin >> s) {
    if (s == "+") {
      a = st.top(); st.pop();
      b = st.top(); st.pop();
      st.push(b+a);
    } else if (s == "-") {
      a = st.top(); st.pop();
      b = st.top(); st.pop();
      st.push(b-a);
    } else if (s == "*") {
      a = st.top(); st.pop();
      b = st.top(); st.pop();
      st.push(b*a);
    } else {
      st.push(atoi(s.c_str()));
    }
  }
  cout << st.top() << endl;
  st.pop();
  return 0;
}
