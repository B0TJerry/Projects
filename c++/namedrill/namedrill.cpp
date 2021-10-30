#include "std_lib_facilities.h"
int main() {
cout << "Please enter the name and age of a a friend who you are writing to and another friend, their age and sex in that order.\n";
	string first_name, first_name0, sex;
	short age, age0, age1;
	
	cin >> first_name;
	cin >> age;
	if (age > 110 || age < 0) {
		simple_error("you're kidding!");
	}
	cin >> first_name0;
	cin >> age0;	
	if (age0 > 110 || age0 < 0) {
		simple_error("you're kidding!");
	}
	cin >> sex;
	if (sex == "m" || sex == "male") {
		sex = "him";
	}
	if (sex == "f" || sex == "female") {
	sex = " her";
	}
	cout << "Dear " << first_name << ",\n"
	     << "Hello, " << first_name << " (age " << age << ")!\n"
	     << "How are you" << first_name << "?\n"
	     << "I miss you very much\n"
	     << "have you seen " << first_name0 << " lately?\n"
	     << "if so tell " << sex << " to call me.\n";
	if (age < 12) {
		cout << "next year you will will be " << age+1 << "!\n";
	}
	if (age == 17) {
		cout << "next year you will be able to vote!\n";
	}
	if (age > 70) {
		cout << "I hope you are enjoying your retirement!\n";
	}

}
