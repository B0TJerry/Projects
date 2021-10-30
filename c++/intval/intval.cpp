#include "std_lib_facilities.h"
 int GCD(int val1,int val2)
   {
      if(val2==0)  // base case, the programs stops if y reaches 0.
         return val1;     //it returns the GCD
      else 
        return GCD(val2,val1%val2); //if y doesn't reach 0 then recursion continues
   }
int main() {
	cout << "Please enter two integer values\n";
	int val1, val2;
	cin >> val1 >> val2;
	if (val1 < val2) { 
		cout << val1 << " is smaller\n"
		     << val2 << " is larger\n"; 
	}
	if (val1 > val2) {
		cout << val2 << " is smaller\n"
     		     << val1 << " is larger\n";
	}
	cout << "ratio of " << val1 << " and " << val2 << " is "<< val1/ GCD(val1,val2) 
	     << ':' << val2/GCD(val1,val2) << '\n';
	double val3 = val1, val4 = val2;
	cout << val3 << " + " << val4 << " = " << val3 + val4 << '\n';
	cout << val3 << " - " << val4 << " = " << val3 - val4 << '\n';
	cout << val3 << " * " << val4 << " = " << val3 * val4 << '\n';
	cout << val3 << " / " << val4 << " = " << val3 / val4 << '\n';
}
