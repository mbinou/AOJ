#include<iostream>
#include<algorithm>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

class Dice
{
private:
	int tmp;
public:
	int lab[6];
	void rE(){
		tmp = lab[0];
		lab[0] = lab[3];
		lab[3] = lab[5];
		lab[5] = lab[2];
		lab[2] = tmp;
	}
	void rN(){
		tmp = lab[0];
		lab[0] = lab[1];
		lab[1] = lab[5];
		lab[5] = lab[4];
		lab[4] = tmp;
	}
	void rS() {
		tmp = lab[0];
		lab[0] = lab[4];
		lab[4] = lab[5];
		lab[5] = lab[1];
		lab[1] = tmp;
	}
	void rW() {
		tmp = lab[0];
		lab[0] = lab[2];
		lab[2] = lab[5];
		lab[5] = lab[3];
		lab[3] = tmp;
	}
	void rR() {
		tmp = lab[1];
		lab[1] = lab[2];
		lab[2] = lab[4];
		lab[4] = lab[3];
		lab[3] = tmp;
	}
	int get3(int top, int front) {
		int i;
		rep(i,3) {
			rN();
			if (top == lab[0]) break;
			rW();
			if (top == lab[0]) break;
		}
		rep(i,3) {
			if (front == lab[1]) break;
			rR();
		}
		return lab[2];
	}
	bool check(Dice &D) {
		int i;
		rep(i,6) if (lab[i] != D.lab[i]) return false;
		return true;
	}
	bool equal(Dice &D) {
		int i;
		rep(i,3) {
			rN();
			if (lab[0] == D.lab[0]) break;
			rW();
			if (lab[0] == D.lab[0]) break;
		}
		rep(i,4) {
			if (check(D)) return true;
			rR();
		}
		return false;
	}
};


int main() {
	Dice dice1, dice2;
	int i;
	rep(i,6) cin >> dice1.lab[i];
	rep(i,6) cin >> dice2.lab[i];

	//process
	cout << (dice1.equal(dice2) ? "Yes" : "No") << endl;
	return 0;
}
