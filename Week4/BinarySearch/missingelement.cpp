#include <iostream>
using namespace std;

int missingElement( int arr[], int count){
    int start =0, end = count-1;
    int ans = -1;
    while ( start < end){
        int mid = start + (end - start )/2;
        if( arr[mid] == mid+1) {
            ans = mid;
        }
        if( arr [mid] == mid){
            start = mid+1;

        }
        else { 
            end = mid -1;
        }
    }
    return ans;
}
 
int main (){

    int arr[8] = {0,1,2,3,4,6,7,8};

    cout << "Missing element is:  " << missingElement(arr, 8) << endl;
 
return 0;
}