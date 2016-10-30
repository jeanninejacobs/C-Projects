//Jeannine Jacobs
//C++ - SCCC
// May 10, 2015
// CH13 Q6 - Inventory Class

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Inventory
{
public:
	Inventory();
	Inventory(int, int, double);
	void setItemNumber(int);
	void setQuantity(int);
	void setCost(double);
	void setTotalCost();
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();
private:
	int itemNumber;
	int quantity;
	double cost;
	double totalCost;
};


//***** Default Constructor *****//
Inventory::Inventory()
{
	itemNumber = 0;
	quantity = 0;
	cost = 0.0;
	totalCost = 0;
}

//***** Constructor with Arguments *****//
Inventory::Inventory(int n, int q, double c)
{
	itemNumber = n;
	quantity = q;
	cost = c;
	totalCost = 0;
}

//***** setItemNumber assigns value to the itemNumber member *****//
void Inventory::setItemNumber(int i)
{
	itemNumber = i;
}

//***** setQuantity assigns a value to the quantity member *****//
void Inventory::setQuantity(int q)
{
	quantity = q;
}

//***** setCost assigns a value to the cost member *****//
void Inventory::setCost(double c)
{
	cost = c;
}

// setTotalCost assigns a value to the cost member *****//
void Inventory::setTotalCost()
{
	totalCost = quantity * cost;
}

// getItemNumber returns the value of ItemNumber member *****//
int Inventory::getItemNumber()
{
	return itemNumber;
}

//***** getQuantity returns the value of Quantity member *****//
int Inventory::getQuantity()
{
	return quantity;
}

//***** getCost returns the value of cost member *****//
double Inventory::getCost()
{
	return cost;
}

//***** getTotalCost returns the value of TotalCost member *****//
double Inventory::getTotalCost()
{
	return totalCost;
}

int main()
{
	int iNumber, quant;
	double cost;

	cout << "Enter the item number: ";
	cin >> iNumber;

	while (iNumber < 0)
	{
		cout << " Error: Number must be 0 or more. Enter the item number: ";
		cin >> iNumber;
	}

	cout << "Enter the quantity: ";
	cin >> quant;

	while (quant < 0)
	{
		cout << " Error: Number must be 0 or more. Enter the quantity: ";
		cin >> quant;
	}

	cout << "Enter the item's cost: ";
	cin >> cost;

	while (cost < 0)
	{
		cout << " Error: Number must be 0 or more. Enter the item's cost: ";
		cin >> cost;
	}

	Inventory myItem(iNumber, quant, cost);
	myItem.setTotalCost();

	cout << "item number: " << myItem.getItemNumber() << endl;
	cout << "quantity: " << myItem.getQuantity() << endl;
	cout << setprecision(2) << fixed << "cost: $" << myItem.getCost() << endl;
	cout << "total cost: $" << myItem.getTotalCost() << endl;

	cin.get();
	cin.get();
	return 0;
}