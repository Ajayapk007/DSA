#include <iostream>
using namespace std;
int power(int n);


 
int main (){

 int num = 10;
 cout << power(num) << endl;
 
 
return 0;
}

int power(int n ){
    if(n == 1 ) return 2;
    return power(n-1)*2;
}
