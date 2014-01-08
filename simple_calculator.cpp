#include<iostream>
using namespace std;

int main () {
  int a, b;
  char op;
  while (1) {
    cin >> a >> op >> b;
    if (op == '+') {
      cout << a + b;
    } else if (op == '-') {
      cout << a - b;
    } else if (op == '*') {
      cout << a * b;
    } else if (op == '/') {
      cout << a / b;
    } else {
      break;
    }
    cout << endl;
  }

  return 0;
}
