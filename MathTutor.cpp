// Jeannine Jacobs
// C++ Spring 2015
// March 6
// Ch5Q8 - Math Tutor

#include <iostream>
#include <cstdlib>  //for random number
#include <iomanip>
#include <ctime>	//for system time

using namespace std;

int main()
{
	int rand1, rand2, solution = 0, answer = 0, menuChoice;
	double divRand1, divRand2, divAnswer, divSolution;
	const char DivideSymbol = 246;

	//get system time and seed the random number generator
	unsigned seed = time(0);
	srand(seed);
	
	rand1 = (rand() % (100 - 1 + 1)) + 1;
	rand2 = (rand() % (100 - 1 + 1)) + 1;

	do
	{
		//menu to display choices to user
		cout << "\n\nMath Tutor Menu \n" << endl;
		cout << "-----------------------" << endl;
		cout << "1 - Addition" << endl;
		cout << "2 - Subtaction" << endl;
		cout << "3 - Multiplication" << endl;
		cout << "4 - Division" << endl;
		cout << "5 - to Quit" << endl;
		cout << "Enter the number of the operation you want to be tests on: ";
		cin >> menuChoice;

		//input validation
		while (menuChoice < 1 || menuChoice > 5)
		{
			cout << "Invalid choice.  Enter the number from the menu, 1-5." << endl;
			//menu to display choices to user
			cout << "\n\nMath Tutor Menu \n" << endl;
			cout << "-----------------------" << endl;
			cout << "1 - Addition" << endl;
			cout << "2 - Subtaction" << endl;
			cout << "3 - Multiplication" << endl;
			cout << "4 - Division" << endl;
			cout << "5 - to Quit" << endl;
			cout << "Enter the number of the operation you want to be tests on: ";
			cin >> menuChoice;
		}

		cout << "\n";

		//operations for each choice on the menu
		switch (menuChoice)
		{
		case 1:		//addition
			cout << setw(6) << rand1 << endl;
			cout << "+ " << setw(4)<< rand2 << endl;
			cout << "_________ \n" << endl;

			cout << "Please enter your answer: ";
			cin >> answer;

			solution = rand1 + rand2;
			break;

		case 2:		//subtraction
			cout << setw(6) << rand1 << endl;
			cout << "- " << setw(4)<< rand2 << endl;
			cout << "_________ \n" << endl;

			cout << "Please enter your answer: ";
			cin >> answer;

			solution = rand1 - rand2;
			break;

		case 3:		//Multiplication
			cout << setw(6) << rand1 << endl;
			cout << "x " << setw(4) << rand2 << endl;
			cout << "________ \n" << endl;

			cout << "Please enter your answer: ";
			cin >> answer;

			solution = rand1 * rand2;
			break;

		case 4:		//Division

			divRand1 = (rand() % (100 - 19 + 1)) + 1;
			divRand2 = (rand() % (10 - 1 + 1)) + 1;

			cout << divRand1 << " " << DivideSymbol << " " << divRand2 << " =" << endl;

			cout << "Please enter your answer rounded to the the nearest hundredth: ";
			cin >> divAnswer;

			divSolution = divRand1 / divRand2;
			
			double t;
			t = divSolution - floor(divSolution);
			if (t >= 0.5) // round up if .5 or greater
			{
				divSolution *= 10;
				ceil(divSolution);
				divSolution /= 10;
			}
			else// round down if .4 or less
			{
				divSolution *= 10;
				floor(divSolution);
				divSolution /= 10;
			}
			cout << divSolution;
			break;
		}


		if (menuChoice != 4 && menuChoice != 5)
		{
			if (answer == solution)
			{
				cout << "\n*********************************** Correct!  \n" << endl;
			}
			else
			{
				cout << "\n*********************************** Incorrect..." << endl;
				cout << rand1 << " + " << rand2 << " = " << solution << "\n" << endl;
			}

			cout << "Would you like to try again?" << endl;
		}
		else if (menuChoice == 4)
		{
			if (divAnswer == divSolution)
			{
				cout << "\n************************************ Correct! " << endl;
			}
			else
			{
				cout << "\n************************************ Incorrect..." << endl;

				cout << divRand1 << " " << DivideSymbol << " " << divRand2 << " = "
					<< fixed << showpoint << setprecision(2) << divSolution << endl;
			}

			cout << "Would you like to try again?" << endl;
		}

	} while (menuChoice != 5);
	
	cin.get();
	cin.get();
	return 0;
}