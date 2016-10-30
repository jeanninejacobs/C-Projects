//Jeannine Jacobs
//C++ Spring 2015
//Chapter 4 - Q8 - Color Mixer

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string color1, color2;

	cout << "Enter two primary colors to see what color they make. They can be red, yellow or blue." << endl;
	cout << "First color: " << endl;
	getline(cin, color1);
	cout << "Second color: " << endl;
	getline(cin, color2);

	//Verify first color
	if (color1 == "red" || color1 == "yellow" || color1 == "blue")
	{
		//Verify second color
		if (color2 == "red" || color2 == "yellow" || color2 == "blue")
		{
			//mix colors if given primary colors
			if ((color1 == "red" && color2 == "yellow") || (color1 == "yellow" && color2 == "red"))
			{
				cout << "Red and Yellow make ORANGE." << endl;
			}
			else if ((color1 == "red" && color2 == "blue") || (color1 == "blue" && color2 == "red"))
			{
				cout << "Red and Blue make PURPLE." << endl;
			}
			else
			{
				cout << "Blue and Yellow make GREEN." << endl;
			}
		}
		else
		{
			cout << "The second color you entered is not a primary color.";
		}
	}
	else
	{
		cout << "The first color you entered is not a primary color.";
	}

	cin.get();
	return 0;
}