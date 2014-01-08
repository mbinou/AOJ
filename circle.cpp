#include<iostream>
using namespace std;

int main () {
	double r;
	double pi = 3.141592653589;
	double sq, l;
	cin >> r;
	sq = r*r*pi;
	l = 2*pi*r;
	cout.precision(6);
	cout << fixed << sq << " " << l << endl;
	return 0;
}
