#include<iostream>
using namespace std;

int main()
{
  int inp, h, m, s;
  cin >> inp;
  s = inp % 60;
  m = inp / 60;
  h = m / 60;
  m = m % 60;
  cout << h << ":" << m << ":" << s << endl;
}
