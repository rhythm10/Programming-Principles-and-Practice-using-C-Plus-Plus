#include<iostream>
using namespace std;
int main()
{
	double penny, nickel, dime, quarter, half, full;

	cout << "How many pennies do you have?\n";
	cin >> penny;
	cout << "How many nickels do you have?\n";
	cin >> nickel;
	cout << "How many dimes do you have?\n";
	cin >> dime;
	cout << "How many quarters do you have?\n";
	cin >> quarter;
	cout << "How many half-dollars do you have?\n";
	cin >> half;
	cout << "How many one-dollar coins do you have?\n";
	cin >> full;
	 
	
	if (penny == 1)
	{
		cout << "You have " << penny << " penny.\n";
	}
	else 
	{
		cout << "You have " << penny << " pennies.\n";
	}	
	if (nickel == 1)
	{
		cout << "You have " << nickel << " nickel.\n";
	}
	else
	{
		cout << "You have " << nickel << " nickels.\n";
	}
	if (dime == 1)
	{
		cout << "You have " << dime << " dime.\n";
	}
	else
	{
		cout << "You have " << dime << " dimes.\n";
	}
	if (quarter == 1)
	{
		cout << "You have " << quarter << " quarter.\n";
	}
	else
	{
		cout << "You have " << quarter << " quarters.\n";
	}
	if (half == 1)
	{
		cout << "You have " << half << " half-dollar coin.\n";
	}
	else
	{
		cout << "You have " << half << " half-dollar coins.\n";
	}
	if (full == 1)
	{
		cout << "You have " << full << " full-dollar coin.\n";
	}
	else
	{
		cout << "You have " << full << " full-dollar coins.\n";
	}

	cout << "Your total is: " << '$' << penny * .01 + nickel * .05 + dime * .1 + quarter * .25 + half * .5 + full * 1 << ".\n";


}