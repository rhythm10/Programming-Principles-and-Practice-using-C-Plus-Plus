#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int val,num;
	cout <<"Enter number till you want the sum : ";
	cin >> num;
	vector<int> vals;
	cout << "Enter numbers and press | for exit : "<<endl;
	while(cin >> val)
	{
		vals.push_back(val);
	}
	if(vals.size()<num)
	{
		cerr << "You entered less values\n";
	}
	int sum=0;
	for(int i=0;i<num;i++)
	{
		sum += vals[i];
	}
	cout << "The sum of "<< num <<" number is "<< sum<< endl;

}