#include <iostream>
using namespace std;

int main()
{
   int n = 10;
   int mask = 1;

   mask = mask << 2;
   n = n | mask;
   cout << n; 
              //                 Or         and
              //   1     1    =  1           1
              //   1     0    =  1           0
              //   0     1    =  1           0
              //   0     0    =  0           0
   return 0;
}