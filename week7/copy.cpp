#include <iostream>
#include <vector>
using namespace std;

void copyarr( int arr[], vector<int> &ans, int s, int size){ // always use & when you are passing data structure for change in actual structure
    if( s == size) return;

    if(arr[s] % 2 == 0 )
    ans.push_back(arr[s]);
     copyarr( arr, ans, s+1 , size);
}
 

int main (){
int arr[9] ={1,2,3,4,5,6,7,8,9};
vector<int> ans;
copyarr(arr, ans, 0, 9);
cout << "normal array"<< endl;
for (int i = 0; i < 9; i++)
{
   cout << arr[i] << " ";
}


cout << endl << " vector" << endl;

for (int i = 0; i < ans.size(); i++)
{
   cout << ans[i] << "-";
}

return 0;
}