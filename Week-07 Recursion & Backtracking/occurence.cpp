#include <iostream>
using namespace std;
            // find occurence index of target value
void search( int arr[], int index, int size, int key){
    if(index == size) return;
    if( arr[index] == key)
    cout <<"Num " << key << " present at index " << index << " " << endl;
    search(arr, index +1, size, key);
}
 
int main (){

int arr[5] = {4,3,4,6,7};
int key = 4;
int size =5;

 search( arr, 0, size, key);
 
return 0;
}