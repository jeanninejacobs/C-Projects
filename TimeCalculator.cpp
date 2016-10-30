//Jeannine Jacobs
//C++ Sp 2015
//Chapter 4 - Q7 - Time Calculator

#include <iostream>

using namespace std;

int main()
{
	int seconds;

	cout << "Enter a number of seconds: ";
	cin >> seconds;

	if (seconds >= 86400)
	{
		cout << "There are aproximatly " << seconds / 86400 << " days in " << seconds << " seconds.";
	}
	else if (seconds >= 3600)
	{
		cout << "There are aproximatly " << seconds / 3600 << " hours in " << seconds << " seconds.";
	}
	else if (seconds >= 60)
	{
		cout << "There are aproximatly " << seconds / 60 << " minutes in " << seconds << " seconds.";
	}
	else
	{
		cout << "There is no time in the amount of seconds you entered.";
	}

	cin.get();
	cin.get();

	return 0;
}