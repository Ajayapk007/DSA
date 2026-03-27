#include <iostream>
using namespace std;

int search ( int arr[], int index , int size, int key){
    if ( index == size) return -1;
    if( arr[index] == key)
    return index;
    return search(arr, index+1, size , key);
}
 
int main (){

int arr[5] = {4,3,2,6,7};
int key = 4;
int size =5;

cout << "Element is found at " << search( arr, 0, size, key)<< endl;
 
return 0;
}