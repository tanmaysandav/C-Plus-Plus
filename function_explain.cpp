void test (char *test = “\n”, int n = 1 ) {
	for ( int i = 0; i < n; ++i ) {
		cout <<  test;
}
}

//your program here:

#include "std_lib_facilities.h"

void test(char *test = "\n", int n = 1) {
	for (int i = 0; i < n; ++i) {
		cout << test;
	}
}
	
void main()
{
	char *tmp = new char;
	int b;
	cout << "Enter a Charater:\n";
	cin >> tmp;
	cout << "Number of time you want to print the Character" << *tmp << " ";
	cin >> b;
	test(tmp, b);
	test();
	cout << endl;
	keep_window_open();
}
