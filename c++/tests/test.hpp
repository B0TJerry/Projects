#include <iostream>
#include <fstream>
#include <cmath>
#include <string>
#include <cstring>
#include <utility>

using namespace std;

ofstream hst;
void hist ( long double a, char op, long double b, long double ans) {
	hst.open("history.txt", ios::app);
		if (op == 'r') {
			hst << "sqrt(" << b << ") = " << ans << '\n';
		}
		else {
			hst << a << ' ' << op << ' ' << b << " = " << ans << '\n';
		}
	hst.close();
	}
long double add(long double a, long double b) {
	long double ans;
	ans = a + b;
	return(ans);
}
long double sub(long double a, long double b) {
	long double ans;
	ans = a - b;
	return(ans);
}
long double mlt(long double a, long double b) {
	long double ans;
	ans = a * b;
	return(ans);
}
long double div(long double a, long double b) {
	long double ans;
	ans = a/b;
	return(ans);
}
long double sqr(long double b) {
	long double ans;
	ans = sqrt(b);
	return (ans);
}
long double pwr(long double a, long double b) {
	long double ans;
	ans = pow(a,b);
	return (ans);
}
const char INVFNC[] = "Invalid function used.\nValid funtions:\n+ = Add\n- = Subtract\n* = Multiply\n/ = Divide\n^ = Power of...\nr = Square Root of...\nExample: 5 * 5 or 5 / 5\nBe sure to put a value in from of r due to my limited coding skills\n";

