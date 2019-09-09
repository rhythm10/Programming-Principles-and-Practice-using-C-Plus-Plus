#include<iostream>
using namespace std;
int main()
{
	double num1,num2;
	char op;

	cout << "Enter two numbers for calculation : \n";
	cin >> num1 >> num2;
	cout << "Enter operation you want to perform : \n";	
	cin >> op;
	
	switch(op)
	{
		case '+' :
		{
			cout << "\nThe sum of " << num1 << " and " << num2 << " is " <<num1+num2<<endl;
			break;
		}
		case '-' :
		{
			cout << "\nThe sub of " << num1 << " and " << num2 << " is " <<num1-num2<<endl;
			break;
		}
		case '*':
		{
			cout << "\nThe mul of " << num1 << " and " << num2 << " is " <<num1*num2<<endl;
			break;
		}
		case '/' :
		{
			cout << "\nThe div of " << num1 << " and " << num2 << " is " <<num1/num2<<endl;
			break;
		}
		default:
		{
			cout << "Enter correcct operator"<<endl;
		}
	}
}