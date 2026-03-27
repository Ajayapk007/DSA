#include <iostream>
using namespace std;

int firstOccure(int arr[], int target){
    int start = 0; int ans = -1; int end = 1;
    while(start <= end){
        int mid = (start + end)/2;
        if(arr[mid] == target){
            end = mid - 1;
            ans  = mid;
        }
        else if(arr[mid] > target){
            end = mid - 1;
        }
        else start = mid + 1;
    }

    return ans;
}
 
int main (){

int arr[1]{4};

cout << "first Occurence " << firstOccure(arr,4);
 
return 0;
}