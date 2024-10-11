#include <iostream>
#include <vector>
using namespace std;

            // find occurence index of target value and return it
vector<int> search(int arr[], int index, int size, int key, vector<int>ans){
    if(index == size) return ans;
    if( arr[index] == key)
    ans.push_back(index);
     return search(arr, index +1, size, key, ans);
    
}
 
int main (){

    int arr[6] = {4,3,4,6,7,4};
    int key = 4;
    int size =6;
    vector<int> ans = search( arr, 0, size, key, ans);
    // cout << ans.size();
    for (size_t i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    
 
return 0;
}