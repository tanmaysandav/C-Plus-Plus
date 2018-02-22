
#include "std_lib_facilities.h" // user file present in repo.

//Program to print triangle it will ask user to provide input for  number of lines and alignment of side
// The code will use if-else statement to execute job

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
	int i, j, k;
	k = n;
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

int error(int Star){
	while (cin.fail()) {
		cout << "Error Please provide Integer Value" << endl;
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
	
	transform(Side.begin(), Side.end(), Side.begin(), toupper);
	if (Side == "Q" || Side == "L" || Side == "R") {

			while (Side != "Q") {
				if (Side == "R") {
					RightTriangle(Star);
					goto InputStar;
					
					
				}
				else if (Side == "L") {
					LeftTriangle(Star);
					goto InputStar;
					
				}
				else {
				cout << " Please Provide Valid Input \n";
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