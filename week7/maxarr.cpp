#include <iostream>
#include <climits>
using namespace std;
 
 void maxi ( int arr[], int index, int size, int &maX){
    if( index == size) return;
    if( maX < arr[index])
      maX = arr[index];

     maxi(arr, index + 1, size, maX); 

 }


int main (){

int arr[5] ={22,3,1,55,3};
int maX = INT_MIN;
maxi(arr, 0, 5, maX);
 
 cout << maX;
return 0;
}