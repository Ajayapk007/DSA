#include <iostream>
#include <vector>
using namespace std;
 
int solve ( vector<int> &arr){
    int start = 0; 
    int end = arr.size()-1;
    int mid ;
    while (start <= end)
    {   if( start == end ){
        return start;
    }
       mid = start + ( end - start)/2;

        if( mid% 2 ==0){
            if( arr[mid] == arr[mid+1]){
                start = mid+2;
            }
            else
            end = mid;
        }
        else{
            if( arr[mid] == arr[mid -1]){
                start = mid+1;
            }
            else 
            end = mid-1;
        }
    }
    


}

int oddOccurrences(vector<int> &arr){
    int start = 0; int end = arr.size() - 1;
    int mid;
    if(start == end) return start;
    while(start < end){
        mid = start +(end - start)/2;
        if(arr[mid] != arr[mid-1] && arr[mid] != arr[mid+1] ) return mid;
        cout << "iterations " << endl;
        if(mid & 1){
            if(arr[mid] == arr[mid-1]){
                start = mid+1;
            }
            else{
                end = mid-1 ;
            }
        }
        else{
            if(arr[mid] == arr[mid+1]){
                start = mid+1;
            }
            else{
                end = mid;
            }
            
        }
    }
    return start;
}

int main (){
    vector<int> arr{1,1,2,2,3,3,4,4,9,9,6,6,77,77};
    int ans = solve( arr);
    int newAns = oddOccurrences(arr);
    cout << "odd occurene is " << arr[ans] << endl;;
    cout << "odd occurene is " << arr[newAns];
    
return 0;
}