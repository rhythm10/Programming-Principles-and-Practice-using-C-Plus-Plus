#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<double> temps;        // temperatures
    double temp;
    while (cin>>temp)            // read
        temps.push_back(temp);   // put into vector

    // compute mean temperature:
    double sum = 0;
    for (int i = 0; i< temps.size(); ++i) sum += temps[i];
    cout << "Average temperature: " << sum/temps.size() << endl;

    // compute median temperature:
    qsort(temps); // sort temps
    // "from the beginning to the end."
    cout << "Median temperature: "
         << (temps[temps.size()/2]+temps[temps.size()/2-1])/2 << endl;
}