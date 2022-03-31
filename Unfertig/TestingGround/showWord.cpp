
#include <cstring>
#include <iostream>
#include "functions.cpp"
#include "alpha.cpp"

using namespace std;

// driver code
int SplitWord()
{
	// assigning value to string s
	string s = "plotkin";

	int n = s.length();

	// declaring character array
	char char_array[n + 1];

	// copying the contents of the
	// string to char array
	strcpy(char_array, s.c_str());

	for (int i = 0; i < n; i++){
		cout << char_array[i];
    }
	return 0;
}





