#include <iostream>
using namespace std;

int main (){
    int  enteredNumber = 97;

    int i = 2 ;
    while( i < enteredNumber - 1){
        if(enteredNumber % i == 0){
            cout<< "its a not prime" << endl;
            return 0;
        }
        i++;
    }
    cout <<" Entered Number is a prime number" << endl;
    return 0;
}