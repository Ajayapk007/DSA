#include <iostream>
using namespace std;

int factorial(int n){
    
   if(n ==0 || n  ==1) //base condition facctorial of 1 and 0 is 1
   return 1;
    
    int ans = factorial(n-1);
    // cout << ans<< endl;
    int finalanswer  = n * ans;
    return finalanswer;
    
}


void fact(int num, int current = 1, int facto = 1){
    

    if(num >= current){
        facto *= current;
        cout << facto ;  
    }
    else
    return;
    if( num > current)
    cout << " * ";
    fact(num, current+1, facto );
}

 
int main (){

    int num = 5;
    cout << factorial(num) << " = " ;
    
    fact(num);
    // cout << "here" << endl;
 
return 0;
}