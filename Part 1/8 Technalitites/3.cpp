#include<iostream>
#include<vector>
using namespace std;
void fib(int x,int y,vector<int> &v,int n);
void print(vector<int> &v, int n);
int main()
{
	vector<int> v;
	int x,y,n;
	cin >> x >> y >> n;
	fib(x,y,v,n);
}
void fib(int x,int y,vector<int> &v,int n)
{
	v.push_back(x);
	v.push_back(y);
	for(int i=2;i<n;i++)
	{
		int z = x + y;
		v.push_back(z);
		x = y;
		y = z;
	}
	print(v,n);
}
void print(vector<int> &v, int n)
{
	for(int i=0;i<v.size();i++)
	{
		cout << v[i] <<" ";
	}
}