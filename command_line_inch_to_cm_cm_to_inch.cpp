// This program will accept command line argument
//This program will convert inch to cm and cm to ince as per user instruction

#include <iostream>
#include<cmath>
#include "std_lib_facilities.h"

int main(int argc, char *argv[])
{
	string str = "";
	const double cm2inch = 2.54;
	double val;
		if (argc == 3){
		str = string(argv[1]);
		val = atof(argv[2]);
		if (str == "i")		// 'i' for inch
			cout << val << " inch == " << val * cm2inch << " cm\n";
		else if (str == "c")	// 'c' for cm
			cout << val << " cm == " << val / cm2inch << " inch\n";
		else{
			cout << "Please provide valid argument!!";
			return 0;
		}
		return 0;
		}
	else if (argc == 2)
	{
		str = string(argv[1]);
		
		if (str == "help")
		{
			cout << "\n Usage <Program > <unit> <unit_value> \n i for inch to cm converting \n c for cm to inch  \n unit value in Digit ";
		}
		else
		{
			cout << "Please type in unit and it's value! \n";
			cout << "Type in 'Help' for more information ";
		}
		return 0;
	}
	else
	{
		cout << "Please type in unit and it's value! \n";
		cout << "Type in 'Help' for more information";

		return 0;
	}

	return 0;

}