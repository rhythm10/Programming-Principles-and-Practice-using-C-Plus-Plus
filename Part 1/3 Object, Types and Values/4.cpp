#include<iostream>
using namespace std;

main()
{
	double val1,val2;
	cout << "Enter two Values : "<<endl;
	cin >> val1 >> val2;

	cout << "\n";

	if (val1 > val2)
	{
		cout << val1 << " is greater" <<endl;
	}
	if(val2 > val1)
	{
		cout << val2 <<" is greater"<<endl;
	}
	if(val1 == val2)
	{
		cout << "Both values are Equal"<<endl;
	}

	cout << "Sum of two Numbers is : " << val1 + val2 << endl;

	cout << "Difference of these two Numbers is : " << val1 - val2 << endl;

	cout << "Product of two Numbers is : " << val1 * val2 <<endl;

	if(val2 == 0)
	{
		cout << "Can't be Divided by zero (0)" << endl;
	}
	else
	{
		cout << "ratio of these two numbers is :" << val1 / val2 << endl; 
	}
}