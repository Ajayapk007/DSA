#include <iostream>
using namespace std;

int pivot(int arr[], int count){
   int start =0; int end = count -1;
   int mid;
    while (start < end)
    {
        mid = start + ( end -start)/2;
        // if( arr[ mid] > arr[mid+1] )
        // {
            
        // }
        if( arr [mid] > arr[0]){
            start = mid ;
        }
        else 
        end = mid -1;
    }
    
    return arr[start];
   
}
 
int main (){

int arr[14]={3,4,5,6,7,8,9,11,22,33,44,55,1,2};

int n = sizeof(arr)/4;
cout << n << endl;

cout << " Your pivot element is: "<< pivot ( arr, n) << endl;
 
return 0;
}