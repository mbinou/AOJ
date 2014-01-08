#include<iostream>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;

int main () {
  int n, i, j, min_len;
  string taro, hanako;
  int score_t = 0, score_h = 0;

  cin >> n;
  rep(i,n) {
    cin >> taro >> hanako;
    if (taro == hanako) {
      score_t += 1;
      score_h += 1;
      continue;
    }
    min_len = (taro.length() < hanako.length())? taro.length() : hanako.length();
    rep(j,min_len) {
      if (taro[j] - hanako[j] > 0) {
	score_t += 3;
	break;
      } else if (taro[j] - hanako[j] < 0) {
	score_h += 3;
	break;
      } else if (j == min_len-1) {
	if (taro.length() > hanako.length()) score_t += 3;
	else score_h += 3;
      }
    }
  }
  cout << score_t << " " << score_h << endl;
  return 0;
}
