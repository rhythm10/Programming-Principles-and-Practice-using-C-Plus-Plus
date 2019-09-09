#include<iostream>
using namespace std;
int main()
{
   int square[1000] = {1};
   int count = 1;
  
   for(count; square[count] <= 1000; count++)
       square[count] = square[count-1]*2;
   cout<< "It would take " <<count <<" squares to reach 1000 grains\n";
  
   for(count=1; square[count] <= 1000000; count++)
       square[count] = square[count-1]*2;
   cout<< "It would take " <<count <<" squares to reach 1,000,000 grains\n";

   for(count=1; square[count] <= 1000000000; count++)
       square[count] = square[count-1]*2;
   cout<< "It would take " <<count <<" squares to reach 1,000,000,000 grains\n";
  
return 0;
}