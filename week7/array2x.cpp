#include <iostream>
using namespace std;
 
 void multiplieby2(int arr[], int index ,int size){
    if( index == size ) return ;
    arr[index] = arr[index]*2;
    multiplieby2(arr, index +1, size);
    
 }

int main (){

int arr[5] ={10,20,30,40,50};
 
 multiplieby2(arr, 0, 5);
//  cout << "normal array"<< endl;
for (int i = 0; i < 5; i++)
{
   cout << arr[i] << " ";
}

return 0;
}