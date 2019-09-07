#include<iostream>
using namespace std;

main()
{
	int n;

	cout << "Enter any Number to check its Even or Odd ";
	cin >> n;

	if(n % 2 == 0)
	{
		cout  << n <<" is even Number";
	}

	else
	{
		cout << n <<" is odd Number";
	}
}