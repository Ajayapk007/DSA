#include <iostream>
#include <vector>

using namespace std;
 
int main (){
vector<int>arr1{1,2,3,2,2,4,5};
vector<int>arr2{2,2,4,6,7,1};
vector<int>arr3;

 for (int i = 0; i < arr1.size(); i++)
 {
    for (int j =0; j < arr2.size(); j++)
    {
       if( arr1[i] == arr2[j]){
            arr2[j] = INT16_MIN;
        arr3.push_back(arr1[i]);
       }
    }
    
 }
 for (size_t i = 0; i < arr3.size(); i++)
 {
    cout << arr3[i] << " ";
 }
 
 
return 0;
}