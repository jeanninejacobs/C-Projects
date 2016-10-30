//Jeannine Jacobs
// C++ - SCCC
// May 10, 2015
// CH13 Q7 - Test Scores Class

#include <iostream>

using namespace std;

class testScores
{
public:
	testScores(double, double, double);
	void setScoreOne(double);
	void setScoreTwo(double);
	void setScoreThree(double);
	double getAverage();
private:
	double scoreOne;
	double scoreTwo;
	double scoreThree;
};


//Costructor
testScores::testScores(double o, double t, double e)
{
	scoreOne = o;
	scoreTwo = t;
	scoreThree = e;
}

// setScoreOne assigns a value to scoreOne member
void testScores::setScoreOne(double num)
{
	scoreOne = num;
}

// setScoreTwo assigns a value to scoreTwo member
void testScores::setScoreTwo(double num)
{
	scoreTwo = num;
}

// setScoreThree assigns a value to scoreThree member
void testScores::setScoreThree(double num)
{
	scoreThree = num;
}

// getAverage returns the average of all three test scores
double testScores::getAverage()
{
	return (scoreOne + scoreTwo + scoreThree) / 3.0;
}

int main()
{
	double one, two, three;

	cout << "Enter the score for test one: ";
	cin >> one;

	cout << "Enter the score for test two: ";
	cin >> two;

	cout << "Enter the score for test three: ";
	cin >> three;

	testScores myAverage(one, two, three);

	cout << "Your test average is: " << myAverage.getAverage();

	cin.get();
	cin.get();
	return 0;
}