//Jeannine Jacobs
//C++/Unix - Spring 2015
//Chapter 4 - Q5 - Body Mass Index

#include <iostream>

using namespace std;

int main()
{
	double weight, height, bmi;
	
	cout << "Enter your weight in pounds and height in inches, seperated by a space: ";
	cin >> weight >> height;

	//Calculate BMI
	bmi = (weight / (height * height)) * 703;

	cout << "Your BMI is " << bmi;
	
	if (bmi < 18.5)
	{
		 cout << ". You are considered underweight." << endl;
	}
	else if (bmi > 25)
	{
		cout << ". You are considered overweight." << endl;
	}
	else
	{
		cout << ". Your weight is considered optimal." << endl;
	}

	cin.get();
	cin.get();
	return 0;
}