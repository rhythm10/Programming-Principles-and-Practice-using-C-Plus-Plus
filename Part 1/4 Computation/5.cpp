#include<iostream>
#include<vector>
using namespace std;
main()
{
	vector<string> dig = {"zero","one","two","three","four","five","six","seven","eight","nine"};

	cout << "\nEnter digits you want to convert it into verbal values : \n";

	int number = 0;
	string op = " ";
	while(cin >> number && op != "|")
	{
        cout << "\n" << number << "\t" << dig[number] << "\n";
	}
	
	cout << "Convert verbal values into digits \n";

	cin.clear();

	string num;
	while(cin >> num)
	{
		for(int i=0 ; i <= dig.size() ; i++)
		{
			if(num == dig[i])
			{
				cout << "\n" << num << "\t" <<i<<endl;
			}
		}
	}

	
}