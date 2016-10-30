// Jeannine Jacobs
// C++ Spring 2015
// March 6
// CH5Q6 - Distance Traveled

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int distance = 0, time, speed;

	cout << "What is the speed of the vehicle in MPH? ";
	cin >> speed;

	while (speed < 0)
	{
		cout << "Please enter a speed of 0 or greater: ";
		cin >> speed;
	}

	cout << "How many hours has it traveled? ";
	cin >> time;

	while (time < 1)
	{
		cout << "Please enter a time of 1 or greater: ";
		cin >> time;
	}

	cout << "Hour \t Distance Traveled" << endl;
	cout << "----------------------------" << endl;

	for (int i = 1; i <= time; i++)
	{
		distance = i * speed;
		cout << setw(10) << left << i << setw(10) << left << distance << endl;
	}

	cin.get();
	cin.get();
	return 0;
}