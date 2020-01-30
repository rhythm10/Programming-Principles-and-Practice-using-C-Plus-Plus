#include<iostream>
#include<vector>
using namespace std;
void print(const string& label, const vector<int> &data);
int main()
{
	vector<int> sample;
	string label="Sample Data";

	for(int i=0;i<100;i++)
	{
		sample.push_back(i);
	}

	print(label,sample);
	print("A pair", vector<int> {10, 99});
    print("Empty", vector<int> {});
}
void print(const string& label, const vector<int> &data)
{
	cout << endl <<endl;
	cout << label << ": { ";
	for(int i : data)
	{
	cout << i <<" ";
	} 
	cout << "}";
}