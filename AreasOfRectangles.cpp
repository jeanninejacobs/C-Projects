//Jeannine Jacobs
//CIS 134
// Chapter 4, Areas of Rectangles

#include <iostream>

using namespace std;

int main()
{
	double width1, width2, length1, length2, area1, area2;

	cout << "Enter the length and width of your first rectangle, seperated by a space: ";
	cin >> length1 >> width1;

	cout << "Enter the length and width of your second rectangle, seperated by a space: ";
	cin >> length2 >> width2;

	area1 = width1 * length1;

	area2 = width2 * length2;

	if (area1 > area2)
	{
		cout << "The area of the first rectangle is greater than the area of the second rectangle." << endl;
	}
	else if (area1 < area2)
	{
		cout << "The area of the second rectangle is greater than the area of the first rectangle." << endl;
	}
	else if (area1 == area2)
	{
		cout << "Both rectangles have the same area." << endl;
	}
	else
	{
		cout << "Error, try again." << endl;
	}

	cin.get();
	cin.get();
	return 0;
}

