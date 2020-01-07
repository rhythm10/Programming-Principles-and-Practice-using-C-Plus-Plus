#include<iostream>
#include<vector>
using namespace std;
int main(){
	double num;
	vector<int> v;
	vector<int> diff;
	cout << "Enter values and press | for exit : ";
	while(cin >> num)
	{
		v.push_back(num);
		if(v.size() < 2)
		{
			cout << "Enter more numbers :";
		}
		else
		{
			diff.push_back(num-v[v.size()-2]);
		}
	}
	cout << "Adj. Number diff is: ";
	for(int i=0;i<diff.size();i++)
	{
		cout << diff[i]<<" ";
	}
	
}