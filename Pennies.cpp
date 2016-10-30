// Jeannine Jacobs
// C++ spring 2015
// March 6
// CH5Q7 - Pennies for Pay

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double pennies = 1, days, dollars;

	cout << "Enter the number of days you will work: ";
	cin >> days;

	while (days < 1)
	{
		cout << "Please enter number greater than 1 for days worked: ";
		cin >> days;
	}

	cout << "Day \t Number of Pennies" << endl;
	cout << "--------------------------" << endl;
	cout << "1 \t 1" << endl;

	for (int i = 2; i <= days; i++)
	{
		pennies *= 2;

		cout << setw(9) << left << i << setw(9) << left << pennies << endl;

	}

	dollars = pennies / 100;
	cout << " " << endl;
	cout << "Your total pay will be: $" << showbase << fixed << setprecision(2) << dollars << endl;

	cin.get();
	cin.get();
	return 0;
}