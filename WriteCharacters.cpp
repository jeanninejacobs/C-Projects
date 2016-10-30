//Jeannine Jacobs
// Data Structures
// Recursive function
// February 26, 2015

#include <iostream>

using namespace std;

void writeChar (char n, int line)
{
	if (line == 0)
	{
		return;
	}
	else
	{
		cout << n;
		writeChar(n,--line);
	}

	
}

void writeChar (char n, int line, int row)
{
	if (row == 0)
	{
		return;
	}
	else
	{
		writeChar(n,line);
		cout << "\n";
		writeChar(n, line, --row);
	}
	
}

int main()
{
	char c;
	int numChar, numRow;
	
	cout << "Enter a single character: ";
	cin >> c;

	cout << "Enter the number of times to be printed in a row: ";
	cin >> numChar;

	cout << "Enter the number of rows to be printed: ";
	cin >> numRow;

	writeChar(c, numChar, numRow);

	cin.get();
	cin.get();
	return 0;
}
