#include<iostream>
#include<vector>

using namespace std;
main()
{
	vector<double> dist;

	double sum = 0;	// accumulate total distance in sum
	double min = 32767;	// smallest distance
	double max = 0; // latgest distance

	cout<< "please enter a whitespace-separated sequence of doubles (representing distances) : ";
	double val = 0;
	while (cin>>val  && val != 99) 
	{	// read distance
		if (val<=0) 
		{
			cout << "Distance can't be negative";
		}
		else
		{
			dist.push_back(val);

		}
			
		sum += val;
		if (val<min) min = val;
		if (max<val) max = val;
	}
	cout << "total distance " << sum << '\n';
	cout << " smallest distance " << min << '\n';
	cout << "greatest distance " << max << '\n';
	cout << "mean distance " << sum/dist.size() << '\n';
	
}
