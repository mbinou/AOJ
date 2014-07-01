#include<iostream>
#include<cmath>
#include<iomanip>

#define REP(i,a,b) for(i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)

using namespace std;

int main() {
	int n, i;
	double p1 = 0.0, p2 = 0.0, p3 = 0.0, pin = 0.0;

	// input vector
	cin >> n;
	double x[n], y[n];
	rep(i,n) cin >> x[i];
	rep(i,n) cin >> y[i];

	// caliculate D1
	rep(i,n) p1 += fabs(x[i]-y[i]);
	cout << fixed << setprecision(6) << p1 << endl;

	// caliculate D2
	rep(i,n) p2 += pow(fabs(x[i]-y[i]),2);
	p2 = sqrt(p2);
	cout << fixed << setprecision(6) <<  p2 << endl;

	// caliculate D3
	rep(i,n) p3 += pow(fabs(x[i]-y[i]),3);
	p3 = pow(p3, 1.0/3.0);
	cout << fixed << setprecision(6) << p3 << endl;

	// caliculate D_inf
	rep(i,n) if (pin < fabs(x[i]-y[i])) pin = fabs(x[i]-y[i]);
	cout << fixed << setprecision(6) <<  pin << endl;

	return 0;
}
