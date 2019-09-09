#include<iostream>
using namespace std;
int main()
{
	string answer = "";
	int guess_max = 100;
	int guess_min = 1;
	while (guess_min != guess_max) {
		cout << "Is the number you are thinking of less than " 
			<< (guess_max + guess_min + 1) / 2 << "?\n";
		cin >> answer;
		if (answer == "y" || answer == "Y" || answer == "yes" || answer == "Yes")
			guess_max = (guess_max + guess_min) / 2;
		else if (answer == "n" || answer == "N" || answer == "no" || answer == "No")
			guess_min = (guess_max + guess_min + 1) / 2;
		else {
			cout << "Bad input!\n";
		}
	}
	cout << "The number you are thinking of is " << guess_min << endl;
}