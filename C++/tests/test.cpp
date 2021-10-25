#include "test.h"
int main() {
	long double a,b;
	char op;
	long double ans;

	while(cin >> a >> op >> b)	{
	switch (op){
		case '+':
			ans = add(a,b);
			cout << a << " + " << b << " = " << ans << '\n';
			hist(a,op,b,ans);
			break;
		case '-':
			ans = sub(a,b);
			cout << a << " - " << b << " = " << ans << '\n';
			hist(a,op,b,ans);
			break;
		case '*':
			ans = mlt(a,b);
			cout << a << " * " << b << " = " << ans << '\n';
			hist(a,op,b,ans);
			break;
		case '/':
			ans = div(a,b);
			cout << a << " / " << b << " = " << ans << '\n';
			hist(a,op,b,ans);
			break;
		case '^':
			ans = pwr(a,b);
			cout << a << " ^ " << b << " = " << ans << '\n';
			hist(a,op,b,ans);
			break;
		case 'r':
			ans = sqr(b);
			cout << "√" << b << " = " << ans << '\n';
			hist(a,op,b,ans);
			break;
		default:
			cout << INVFNC;
			a = 0;
			b = 0;
			op = ' ';
			break;
		}	
	}
}
