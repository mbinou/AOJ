#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;


int main () {
  int n, num;
  int cards[4][13] = {{0}};
  char mark;
  int i,j;
  cin >> n;

  // S:0, H:1, C:2, D:3
  rep(i,n) {
    cin >> mark >> num;
    switch (mark)
      {
      case 'S':
	cards[0][num-1] = 1;
	break;
      case 'H':
	cards[1][num-1] = 1;
	break;
      case 'C':
	cards[2][num-1] = 1;
	break;      
      case 'D':
	cards[3][num-1] = 1;
	break;
      default:
	break;
      }
  }

  rep(i,4) {
    rep(j,13) {
      if (cards[i][j] == 0) {
	switch (i)
	  {
	  case 0:
	    cout << "S " << j+1;
	    break;
	  case 1:
	    cout << "H " << j+1;
	    break;
	  case 2:
	    cout << "C " << j+1;
	    break;
	  case 3:
	    cout << "D " << j+1;
	    break;
	  default:
	    break;
	  }
	cout << endl;
      }
    }
  }
  return 0;
}
