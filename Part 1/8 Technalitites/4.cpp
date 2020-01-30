#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void fib(int x,int y,vector<int> &v,int n);
void fibrev(int x,int y,vector <int> &v,int n);
void fib_rev(int x,int y,vector <int> &v,int n);
void print(vector<int> &v, int n);
int main()
{
	vector<int> v;
	int x,y,n;
	cin >> x >> y >> n;
	cout << "Original list : ";
	fib(x,y,v,n);
	cout << "New reverse List : ";
	fib_rev(x,y,v,n);
	cout << "Reverse on same vector : ";
	fibrev(x,y,v,n);
}
void fibrev(int x,int y,vector <int> &v,int n)
{
	int i,j;
	n = v.size();
	for(i=0, j=n-1;i<=n/2;i++,j--)
	{
		swap(v[i],v[j]);
	}
	print(v,n);
}
void fib_rev(int x,int y,vector <int> &v,int n)
{
	vector <int>r;
	for(int i=v.size();i>0;i--)
	{
		r.push_back(v[i-1]);
	}
	print(r,n);
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
	cout <<endl;
}