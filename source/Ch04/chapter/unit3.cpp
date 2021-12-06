#include "std_lib_facilities.h"

int main(){

	constexpr double inch_to_cm = 2.54;

	double lenght = -1;
	char unit = 0;

	cout << "Please enter a length followed by a unit (c or i)" << endl;

	cin >> lenght >> unit;


	switch(unit){
		case 'i':
				cout << lenght << " in == " << lenght * inch_to_cm << " cm" << endl;
				break;
		case 'c':
				cout << lenght << " in == " << lenght / inch_to_cm << " inch" << endl;
				break;
		default:
				cout << "Error, unit not recognized!" << endl;
				break;
	}

/*
	if ( unit == 'i' )
		cout << lenght << "in == " << lenght * inch_to_cm << " cm" << endl;
	else if ( unit == 'c' )
		cout << lenght << "in == " << lenght / inch_to_cm << " inch" << endl;
	else
		cout << "Error, unit not recognized!" << endl;
*/
	return 0;
}