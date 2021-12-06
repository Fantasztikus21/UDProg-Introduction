#include "std_lib_facilities.h"

int main(){
	
	cout << "Enter your name: " << endl;
	string your_name;
	cin >> your_name;

	cout << "Enter the name of the preson you want to write to: " << endl;
	string first_name;
	cin >> first_name;

	cout << "Enter your friend name: " << endl;
	string friend_name;
	cin >> friend_name;

	cout << "Enter an 'm' if the friend is male and an 'f' if the friend is female" << endl;
	char friend_sex = 0;
	cin >> friend_sex;

	cout << "Enter the age: " << endl;
	int age = 0;
	cin >> age;

	if (age <= 0 || age >= 110)
		simple_error("you're kidding!");

	cout << endl;

	cout << "Dear " << first_name << "," << endl;
	cout << "How are you? I am fine. I miss you." << endl;
	cout << "Have you seen " << friend_name << " lately?" << endl;

	if ( friend_sex == 'm' )
		cout << "If you see " << friend_name << " please ask him to call me." << endl;
	else if( friend_sex == 'f' )
		cout << "If you see " << friend_name << " please ask her to call me." << endl;

	if (age < 12)
		cout << "Next year you will be " << age + 1 << "." << endl;
	else if (age == 17 ) 
		cout << "Next year you will be able to vote." << endl;
	else if (age > 70)
		cout << "I hope you are enjoying retirement." << endl;

	cout << "Yours sincerely";
	cout << endl;
	cout << endl;
	cout << your_name << endl;;

	return 0;
}