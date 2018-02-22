#include "std_lib_facilities.h"

float calc(float i) {
	
	cout << i << '\t' << i * i << '\t' << i * i*i << '\t' << "\n";
	return 0;
}

int main() {

	float i = 0;
	//char e;
	cout << "Enter number to calculate Square and Cube \n";
	int a = 0;
	cin >> i;
	cout << "integer\tsquare\tcube\n";
	for (a; a <= i; a++) {
		calc(a);
	}

	keep_window_open();
	return 0;

}