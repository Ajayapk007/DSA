#include <iostream>
using namespace std;

long long fact( int n){
   
    if( n==1)
    return 1;

    return n* fact(n-1);
}

 
int main (){
    long long n =13;
    long  long ans = fact (n );
    cout << " Facto of "<< n << " is "<< ans;

 
return 0;
}