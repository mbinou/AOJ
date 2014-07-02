#include<cstdio>
#include<cmath>
#include<vector>
#include<algorithm>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;
int cnt = 0;

void insertionSort(vector<int> &A, int g) {
	int i, j, v, n = A.size();
	REP(i,g,n) {
		v = A[i];
		j = i - g;
		while (j >= 0 && A[j] > v) {
			A[j+g] = A[j];
			j = j - g;
			cnt++;
			// if (cnt > ceil(pow(n,1.5))) break;
		}
		A[j+g] = v;
	}
}
void shellSort(vector<int> &A) {
	int i, cnt = 0, n = A.size();
	vector<int> G;
	for(i=1;i<=n;i=3*i+1) G.push_back(i);
	reverse(G.begin(), G.end());
	int m = G.size();
	printf("%d\n",m);
	rep(i,m) printf(i < m-1 ? "%d ":"%d\n",G[i]);
	rep(i,m) insertionSort(A, G[i]);
}
int main() {
	int n,i,x;
	scanf("%d", &n);
	vector<int> A;
	rep(i,n) scanf("%d",&x),A.push_back(x);
	shellSort(A);
	printf("%d\n",cnt);
	rep(i,n) printf("%d\n",A[i]);
}
