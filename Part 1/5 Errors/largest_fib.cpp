#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n;
	vector<int> fib;
	fib.push_back(1);
	fib.push_back(1);
	cout << "Largest Fibonacci number till your system support : "<<endl;
	while(fib[fib.size()-1] + fib[fib.size()-2] > fib[fib.size()-1])
	{
		fib.push_back(fib[fib.size()-1] + fib[fib.size()-2]);
        cout << "The biggest Fibonacci number to fit in an int is " << fib[fib.size()-1] << endl;
	}
}