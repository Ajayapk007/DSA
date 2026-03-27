#include <iostream>
using namespace std;
 
bool checkSorted(int arr[], int index, int size ){

    if(index >= size - 1 )return true;
    
    if( arr[index] > arr[index + 1]) return false;
    return checkSorted(arr, index + 1, size);
}


int main (){

    // int arr[6] = {5,2,3,1,2,32};
    int arr[6] ={};
    int size = 0;
    bool ans = checkSorted( arr, 0, size);
   
   cout << "Given array is : " << ans;
    // for (size_t i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    
return 0;
}