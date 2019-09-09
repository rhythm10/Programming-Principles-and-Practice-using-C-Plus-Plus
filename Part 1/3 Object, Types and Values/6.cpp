#include<iostream>
using namespace std;

main()
{
	string a, b, c, smallest , middle , largest;

	cout << "Enter three Strings : "<< endl ;
	cin >> a >> b >> c ;

	if(a <= b && a <= c)
	{
		smallest = a;

		if(b <= c)
		{
			middle = b;
			largest = c;
		}
		else
		{
			middle = c;
			largest = b;
		}
	}

	else if(b <= a && b <= c)
	{
		smallest = b;

		if( a <= c )
		{
			middle = a;
			largest = c;
		}
		else
		{
			middle = c;
			largest = a;
		}
	}

	else
	{
		smallest = c;

		if(a <= b)
		{
			middle = a;
			largest = b;
		}
		else
		{
			middle = b;
			largest = a;
		}
	}

	cout << "values sorted : " << smallest << ", " << middle << ", " << largest <<'\n';
}
