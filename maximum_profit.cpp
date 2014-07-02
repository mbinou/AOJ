#include <iostream>
#include <limits.h>
#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
using namespace std;
  
int main()
{
    ios::sync_with_stdio(false);
    int N, r, i, min=INT_MAX, max=INT_MIN;
      
    cin >> N;
    rep(i,N) {
        cin >> r;
        if(r-min > max) max = r-min;
        if(r < min) min = r;
    }
    cout << max << endl;
    return 0;
}
