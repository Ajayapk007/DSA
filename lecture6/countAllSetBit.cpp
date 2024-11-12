#include <iostream>
using namespace std;
 
 int countSetBit(int n){
    int conut = 0;
    while (n > 0)
    {
        if(n & 1) conut++;
        n = n >> 1;
    }
    
    return conut;

 }

int main (){
    int n = 34;
    cout << "here" << endl;
    cout << "set bit of n is: " << countSetBit(n);
    
return 0;
}