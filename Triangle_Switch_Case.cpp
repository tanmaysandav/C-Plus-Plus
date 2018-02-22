

//Program to print triangle it will ask user to provide input for  number of lines and alignment of side
// The code will use switch case statement to execute job

#include "std_lib_facilities.h"

void LeftTriangle(int n) {
	int i, j;


	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i; j++) {
			cout << "*";

		}
		cout << "\n";

	}
}


void RightTriangle(int n) {
	
	int k = n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= k; j++)
		{
			cout << " ";
		}
		for (int l = 1; l <= i; l++)
		{
			cout << "*";
		}
		cout << endl;
		k--;
	}
}

int error(int Star) {
	while (cin.fail()) {
		cout << "Error Please Provide Integer Value" << endl;
		cin.ignore(256, '\n');
		keep_window_open();
		cout << " Enter Number of line want to print in Triangle:" << endl;
		cin >> Star;

	}
	return Star;
}
int main() {

	int Star;
	string Side;
	InputStar: cout << " Enter Number of line want to print in Triangle:" << endl;
	cin >> Star;
	if (cin.fail()) {
		Star=error(Star);
	}
	InputSide: cout << "Choose Side to Print Star from (L)left or (R)right side or (Q)quit" << endl;
	cin >> Side;
	int x = -1;

	transform(Side.begin(), Side.end(), Side.begin(), toupper);
	if (Side == "Q" || Side == "L" || Side == "R") {

		if (Side == "L") {
			x = 0;
		}
		if (Side == "R") {
			x = 1;
		}



		while (Side != "Q") {

			switch (x) {
			case 0:
				LeftTriangle(Star);
				goto InputStar;

			case 1:
				RightTriangle(Star);
				goto InputStar;
			
			case 2:
				break;
			default:            // Note the colon, not a semicolon
				cout << "Please Provide Valid Input \n";
				goto InputSide;
			}

			//keep_window_open();
		}
	}
	else {
		cout << " Please Provide Valid Input \n";
		goto InputSide;
	}

return 0;
}