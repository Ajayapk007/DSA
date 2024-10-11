#include <iostream>
using namespace std;

bool  checkprime( int n){
    bool isprime =1;
    
    for (int i = 2; i < n; i++)
    {
        if( n%i == 0)
        return false;
    }
    return true;
    
}
  void PrintPrime(int n)
{
    // cout <<"2" << " ";
    for (int i = 2; i <= n; i++)
    {
        bool isprime = checkprime(i);
        if (isprime)
        {
            cout << i << " ";
        }
    }
}

int main()
{
    int n = 30;
    PrintPrime(n);

    return 0;
}