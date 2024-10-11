#include <iostream>
using namespace std;
  int Revers( int n){
    int ans =0;
    while (n > 0)
    {
        int digit = n%10;
        n /=10;
        ans = ( ans * 10)+digit;

    }
    return ans;

  }

int main (){
int n =234;

cout << " Revers of "<< n << " is " << Revers( n);
 
return 0;
}