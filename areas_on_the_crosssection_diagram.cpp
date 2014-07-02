#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>
#include<string>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int main() {
	int x,h, sum=0,i,j,k;
	string seq;
	vector<int> A, H, S;
	cin >> seq;
	H.push_back(10);
	rep(i,seq.size()) {
		if (seq[i] == '/') {
			H.push_back(H.back()+1);
			S.push_back(1);
		} else if (seq[i] == '\\') {
			H.push_back(H.back()-1);
			S.push_back(-1);
		} else if (seq[i] == '_') {
			H.push_back(H.back());
			S.push_back(0);
		} else cout << "Input Error" << endl;
	}
	rep(i,H.size()) {
		h = 0;
		if (H[i] <= H[i+1]) continue;
		for(j=i+1;j<H.size();j++) {
			if (H[i] == H[j]) {
				x = 0;
				for(k=i;k<j;k++) {
					switch (S[k]) {
						case -1:
							x += h+1;
							h += 1;
							break;
						case 1:
							h -= 1;
							x += h;
							break;
						case 0:
							x += h;
							break;
					}
				}
				A.push_back(x);
				i += j-i-1;
				break;
			}
		}
	}
	rep(i,A.size()) sum += A[i];
	cout << sum << "\n" << A.size() << (A.size() > 0 ? " ":"\n");
	if (A.size() > 0) rep(i,A.size()) cout << A[i] << (i < A.size()-1 ? " ":"\n");
}
