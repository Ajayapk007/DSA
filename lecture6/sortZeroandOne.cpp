#include <iostream>
using namespace std;

void setZeroAndOne(int arr[]){
    int i =0; int j= 9;
    while (i < j){
        if(arr[i] == 0) i++;
        if(arr[j] == 1) j--;

        if(arr[j] == 0 && arr[i] == 1 ){
            // arr[j] = arr[j] * arr[i];
            // arr[i] = arr[j] / arr[i];
            // arr[j] = arr[j] / arr[i];
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            }
        
    }
}

void printArray(int arr[]){
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
};
int main (){

// int arr[10] ={1,0,1,0,1,1,0,0,1,0};
// int arr[10] ={0,0,0,0,0,0,0,0,0,0};
int arr[10] ={1,1,1,1,1,1,1,1,1,1};
printArray(arr);
setZeroAndOne(arr);
printArray(arr);
 
return 0;
}