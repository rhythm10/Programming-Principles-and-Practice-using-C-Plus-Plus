#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    double a,b,c;
    cin >>  a >> b >> c;
    if(a==0)
    {
        if(b==0)
        {
            cout <<"No roots Exists\n";
        }
        else
        {
            cout << (-c/b)<<endl;
        }
    }
    else if(b==0)
    {
        double ca = (-c/a);
        if(ca == 0)
        {
            cout <<"x = 0"<<endl;
        }
        else if(ca < 0)
        {
            cout << "No roots exist";
        }
        else
        {
            cout << "Two Real roots exist"<< sqrt(ca)<<endl;
        }
    }
    else
    {
        double sq = ((b*b) - (4*a*c));
        if(sq==0)
        {
            cout << "One real root exist : "<< -b/(2*a)<<endl;
        }
        else if(sq < 0)
        {
            cout << "no real roots\n";
        }
        else
        {
            cout << "two real roots: "<<((-b+sqrt(sq))/(2*a))<<"and"<<(-b-sqrt(sq)/(2*a))<<endl;
        }
    }

}