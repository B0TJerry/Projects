#include "std_lib_facilities.h"
int main()
{
	int number_of_words = 0;
	int numrepwrd = 0;
	string previous = " ";
	string current;
	while (cin>>current) 
	{
		++number_of_words;
		if (previous == current)
			++numrepwrd;
			cout << "word number " << number_of_words << '\n'
			     << " repeated: " << current << '\n'
			     << " number of repeated words: " << numrepwrd << '\n';

		previous = current;
	}
}

