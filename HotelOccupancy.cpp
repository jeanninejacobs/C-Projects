// Jeannine Jacobs
// C++/UNIX
// March 19, 2015
// Chapter 5, Q9 - Hotel Occupancy

#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
	int floors = 0,				//variables to hold values for hotel floors, rooms and occupency
		rooms,
		totalRooms = 0,
		occupied,
		totalOccupied = 0,
		totalVacant;

	double percentOccupied;

	//Ask user for number of floors in hotel
	cout << "Enter the number of floors in your hotel.\nNumber must be greater than 1: ";
	cin >> floors;

	while (floors <= 1) //Validate input.  Number of floors must be greater than one.
	{
		cout << "Enter the number of floors in your hotel.\nNumber must be greater than 1: ";
		cin >> floors;
	}

	for(int i = 1; i <= floors; i++)  //Loop through each floor to get number of rooms and number occupied.  Validate all input.
	{
		if (i==13)
			continue;
		else
		{
		cout << "Enter the total number of rooms on floor " << i << "\nNumber must be greater than 10: ";
		cin >> rooms;
		
		while (rooms <= 10)
		{
			cout << "Enter the total number of rooms on floor " << i << "\nNumber must be greater than 10: ";
			cin >> rooms;
		}
			
		totalRooms += rooms;

		cout << "Enter the number of rooms on this floor that are occupied: ";
		cin >> occupied;

		while (occupied > rooms)
		{
			cout << "Enter the number of rooms on this floor that are occupied\n Number must be less than or equal to number of rooms: ";
			cin >> occupied;
		}

		totalOccupied += occupied;
		}
	}

	totalVacant = totalRooms - totalOccupied; //Calculate the number of vacant rooms.

	//Display all data.
	cout << "\nYour hotel has " << totalRooms << " rooms." << endl;
	cout << totalOccupied << " rooms are occupied." << endl;
	cout << totalVacant << " rooms are vacant." << endl;

	//Calculate the percentage of occupancy
	percentOccupied = (static_cast<double>(totalOccupied) / totalRooms) * 100;

	cout << setprecision(2) << percentOccupied << "% of your rooms are occupied.";

	cin.get();
	cin.get();
	 
	return 0;
}
