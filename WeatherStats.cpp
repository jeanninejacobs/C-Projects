//Jeannine Jacobs
//C++ - SCCC
//May 10, 2015
//Ch 11 q5 - Weather Statistics MODIFICATION

#include <iostream>
#include <string>

using namespace std;

struct Month
{
	string name;
	double totalRain;
	double highTemp;
	double lowTemp;
	double avgTemp;
};

enum Months { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main()
{
	const int NUM_MONTHS = 12;		//to hold number of months
	Month thisYear[NUM_MONTHS];		//array to hold structs 


	for (int i = JAN; i <= DEC; i++)		//get user input for all months
	{
		//get month name
		cout << "Enter the name of month " << i + 1 << ": ";
		getline(cin, thisYear[i].name);

		//get total rainfall
		cout << "Enter the total rainfall for " << thisYear[i].name << ": ";
		cin >> thisYear[i].totalRain;

		//get high temp
		cout << "Enter the high temperature for " << thisYear[i].name << ": ";
		cin >> thisYear[i].highTemp;

		while (thisYear[i].highTemp < -100 && thisYear[i].highTemp > 140)	//validate input
		{
			cout << "Temp must be within -100 to 140 degrees Fahrenheit. Try again: ";
			cin >> thisYear[i].highTemp;
		}

		//get low temp
		cout << "Enter the low temperature for " << thisYear[i].name << ": ";
		cin >> thisYear[i].lowTemp;

		while (thisYear[i].lowTemp < -100 && thisYear[i].lowTemp > 140)	//validate input
		{
			cout << "Temp must be within -100 to 140 degrees Fahrenheit. Try again: ";
			cin >> thisYear[i].lowTemp;
		}

		thisYear[i].avgTemp = (thisYear[i].highTemp + thisYear[i].lowTemp) / 2;

		cin.ignore();
	}


	double avg = 0;		//Calulate average monthly rainfall

	for (int i = JAN; i <=DEC; i++)
	{
		avg += thisYear[i].totalRain;
	}

	double highest = thisYear[JAN].highTemp;		//Find highest temp
	int h;
	int count;
	for (count = FEB; count <= DEC; count++)
	{
		if (thisYear[count].highTemp > highest)
		{
			highest = thisYear[count].highTemp;
			h = count;
		}
	}

	double lowest = thisYear[JAN].lowTemp;		//Find lowest temp
	int low = JAN;
	int index = JAN;
	for (index = FEB; index <= DEC; index++)
	{
		if (thisYear[index].lowTemp < lowest)
		{
			lowest = thisYear[index].lowTemp;
			low = index;
		}
	}

	double avgAvgTemp = 0;		//Calulate average average monthly temp

	for (int i = JAN; i <= DEC; i++)
	{
		avgAvgTemp += thisYear[i].avgTemp;
	}

	avgAvgTemp /= NUM_MONTHS;


	cout << "\n\n\n\tWeather Statistics" << endl;
	cout << "_________________________________________" << endl;
	cout << "\nThe total monthly rainfall for the year was " << avg << " inches." << endl;

	avg /= NUM_MONTHS;
	cout << "\nThe average monthly rainfall for the year was " << avg << " inches." << endl;

	cout << "\n\nThe month with the highest temperature was " << thisYear[h].name << " with a temp of " <<
		thisYear[h].highTemp << " degrees." << endl;

	cout << "\n\nThe month with the lowest temperature was " << thisYear[low].name << " with a temp of " << thisYear[low].lowTemp << " degrees." << endl;

	cout << "\n\nThe average of the average monthly temperatures was " << avgAvgTemp << " degrees.";

	cin.get();
	return 0;
}