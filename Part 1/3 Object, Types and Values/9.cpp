#include<iostream>
using namespace std;

int main()
{
	string operation;
	double val1 = 0;	// first/leftmost operand
	double val2 = 0;	// second/rightmost operand
	cout << "Please enter an operation (+, -, *, /, plus, minus, mul, div) followed by two floating-point values separated by a space: ";
	
	while(cin >> operation >> val1 >> val2) {	// we do the following as long as we get "good" input
												// and then stop
												// loops will be explainied in detail in Chapter 4
		double res = 0;
		if (operation=="plus" || operation=="+") res = val1+val2;
		else if (operation=="minus" || operation=="-") res = val1-val2;
		else if (operation=="mul" || operation=="*") res = val1*val2;
		else if (operation=="div" || operation=="/") 
		{
			if(val2 == 0) 
			{
				cout << "error " <<endl;
			}
			else 
			{
				res = val1/val2;
			}
		}
		else cout << "sorry: bad operator: ";

		cout << val1 << operation << val2 << " == " << res <<'\n';
		cout << "\nPlease try again: ";
	
}
}