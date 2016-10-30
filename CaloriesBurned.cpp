//Jeannine Jacobs
//C++ Spring 2015
//Chapter 5, Q4 - Calories Burned

#include <iostream>

using namespace std;

int main()
{
	const double CALORIES_BURNED = 3.6;

	double runningTotal;

	cout << "If you burn " << CALORIES_BURNED << " calories per minute on this treadmill, \n";
	
	for (double i=5; i<=30; i+=5)
	{
		
		runningTotal = CALORIES_BURNED * i;

		cout << "then you will burn " << runningTotal << " calories after " << i << " mins." << endl;
	}

	cin.get();
	return 0;
}