#include<iostream>
using namespace std;

int main()
{
    double x = 0;
    double smallest = 0;
    double largest = 0;

    cout << "Please enter a number\n";
    cin >> x;
    largest = x;
    smallest = x;
    cout << "Plese enter a number\n";
    while (cin >> x) {
        cout << x << '\n';
        if (x < smallest) {
            cout << "The smallest so far.\n";
            smallest = x;
        }
        if (x > largest) {
            cout << "The largest so far.\n";
            largest = x;
        }
        cout << '\n';
        cout << "Please enter a number\n";
    }

    return 0;

}