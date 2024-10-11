#include <iostream>
using namespace std;

    bool binarySearch(int arr[], int end, int start, int target){
        
        if( start > end) return false;

        int mid = start + (end - start)/2;

        if( arr[mid] == target ) return true;

        if(arr[mid] > target )
        return binarySearch(arr, mid - 1 , start , target);
        else
        return binarySearch(arr, end , mid + 1 , target);

    }

int main (){

    int arr[10] = {1,2,3,4,5,6,7,8,90,3};
    int target = 90;
    bool  ans = binarySearch(arr, 9, 0, target);

    cout<<" Element found or not : " <<ans;
return 0;
}