//   Jeannine Jacobs
//   Data Structures
//   March 19, 2015
//   Chapter 7, Q9 - Infix to Postfix

#include <iostream>
#include <string>
#include <stack>
#include "mystack.h"

using namespace std;

//Expression class declaration.
class Expression
{
	private:
		string infixExpression;
		string postfixExpression;
	public:
		void showInfix();
		void showPostfix();
		void convertToPostfix();
		void getInfix();
		bool precedence(char, char);
};

//showInfix outputs the infix expression
void Expression::showInfix()
{
	cout << infixExpression << endl;
}

//showPostfix outputs the postfix expression
void Expression::showPostfix()
{
	cout << postfixExpression << endl;
}

//convertToPostfix converts the infix expression into a postfix expression. Result is stored in postfixExpression.
void Expression::convertToPostfix()
{
	
}

//getInfix stores the infix expression from user
void Expression::getInfix()
{
	cout << "Enter the expression in 'infix' notation to be converted: ";
	getline(cin, infixExpression);
}

//precedence determines the order of the two operators passed it.  Returns true if in correct order, false if the second is higher.
bool Expression::precedence(char a,char b)
{
	char precedenceArray[] = {'(', '*', '/', '+', '-'};
	bool status;
	bool match = true;
	int i = 0;
	int j = 0;

	while(!match && i < 5)
	{
		if (a == precedenceArray[i])
		{
			match = false;
		}
		else
		{
			i++;
		}
	}
	
	match = true;

	while (!match && i < 5)
	{
		if (b == precedenceArray[j])
		{
			match = false;
		}
		else
		{
			j++;
		}
	}

	if(i<=j)
	{
		status = true;
	}
	else
	{
		status = false;
	}

	return status;
}

MyStack::MyStack()
{
	stackArray = new char[10];
	stackSize = 10;
	top = -1;
}

//*************************************************** MAIN ***************************************************

int main()
{
	Expression myProblem;

	myProblem.getInfix();

	myProblem.convertToPostfix();

	cout << "The original expression: " << myProblem.showInfix << endl;
	cout << "The expression in postfix:" << myProblem.showPostfix << endl;

	cin.get();
	return 0;
}