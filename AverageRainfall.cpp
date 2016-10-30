// Jeannine Jacobs
// C++/UNIX
// March 19, 2015
// Chapter 5, Q10 - Average Rainfall

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double  years,			//Varialbles to hold data
			months,
			inches,
			totalInches = 0,
			averageInches = 0;

	//Ask user for number of years.
	cout << "Enter the number of years of recorded rainfall: ";
	cin >> years;

	while (years < 1)	// Validate input
	{
		cout << "Enter the number of years of recorded rainfall. Number must be greater than or equal to 1: ";
		cin >> years;
	}

	for (int i = 1; i <= years; i++) //Loop through and get rainfall totals for each month.
	{
		for(int j = 1; j <= 12; j++)
		{
			cout << "Enter the total rainfall for month " << j << " of year " << i << ": ";
			cin >> inches;

			while (inches < 0)  //Validate input
			{
				cout << "Enter the total rainfall for month " << j << " of year " << i << ".\n Number must be 0 or greater: ";
				cin >> inches;
			}

			totalInches += inches;  //Keep running total of inches rained.
		}
	}

	months = years * 12;  //Calculate number of months.

	averageInches = totalInches / months;		//Calculate the average rainfall.

	//Display data
	cout << "\nThere were " << months << " months of recorded rainfall." << endl;
	cout << "The total rainfall for this period was " << totalInches << " inches." << endl;
	cout << "The average rainfall per month was " << setprecision(2) << fixed << averageInches << " inches. " << endl;

	cin.get();
	cin.get();

	return 0;
}