#include <iostream>
using namespace std;
 
int main (){
// int a = 5;

// cout << &a << endl;
// int * p = &a;
// cout << sizeof(p);
// // cout << *p;

int arr[5] = {1,2,3,33,55};

    cout << *arr << endl;
    cout << &arr << endl;
    cout << *(arr+2) << endl;
    cout << arr[0] << endl;
 
return 0;
}