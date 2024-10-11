#include <iostream>
using namespace std;
 
 void rotate(int arr[],int count){
    int j=0;
    for (size_t i = 1; i < count; i++)
    {
        swap(arr[j],arr[i]);
    }
    
 }

int main (){
int  arr[5]={2,1,4,6,3};
rotate( arr, 5);

for (size_t i = 0; i < 5; i++)
 {
    cout << arr[i] << " ";
 }
 
 
return 0;
}