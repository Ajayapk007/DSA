#include <iostream>
#include <vector>
using namespace std;

void intToArr( int n , vector<int> &arr){
    if( n % 10 == 0) return;
    int ans = n%10;
    intToArr(n/10,arr);
    arr.push_back(ans);
}
 
int main (){

int n = 4342;
 
vector<int>arr;
intToArr(n, arr);

for (int i = 0; i < arr.size(); i++)
{
    cout << arr[i] << " ";
}

return 0;
}