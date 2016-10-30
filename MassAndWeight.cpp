//Jeannine Jacobs
//C++ spring 2015
//Chapter 4 - Q6 - Mass and Weight

#include <iostream>

using namespace std;

int main()
{
	double weight, mass;

	cout << "Enter your object's mass in kilograms: ";
	cin >> mass;

	weight = mass * 9.8;

	cout << "Your object weighs " << weight << " newtons. ";

	if (weight > 1000)
	{
		cout << "It is too heavy!" << endl;
	}
	else if (weight < 10)
	{
		cout << "It is too light!" << endl;
	}
	else
	{
		cout << "It is just right." << endl;
	}

	cin.get();
	cin.get();
	return 0;
}