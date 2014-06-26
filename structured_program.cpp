#include<iostream>
#include<math.h>


using namespace std;

void call(int n) {
  int i = 1;
  while(1) {
    int x = i;
    if (x % 3 == 0){
      cout << " " << i;
    } else {
      while(x) {
	if (x % 10 == 3){
	  cout << " " << i;
	  break;
	}
	x /= 10;
      }
    }
    if (++i > n) break;
  }
}

int main () {
  int n;
  cin >> n;
  call(n);
  cout << endl;
}
