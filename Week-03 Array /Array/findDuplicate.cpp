#include <iostream>
using namespace std;
 
bool findDuplicate(int arr[]){
    int arr2[4] {-1};
    for (int i = 0; i < 4; i++)
    {
     arr2[arr[i]]++;
     if(arr2[arr[i]] > 1)return true;   
    }
    return false;
}

int main (){
int nums[] = {1, 2, 3, 1};

cout << "This contains duplicates: " << findDuplicate(nums);;

return 0;
}