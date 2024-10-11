#include <iostream>
using namespace std;

void substring(string &arr, int start, int &count ){
    
    if( start >= arr.size()){
        cout << arr << " " <<endl;
    }
    for(int i = start ; i < arr.size(); i++)
    {
        count ++;
        swap(arr[start],arr[i]);
        substring(arr, start + 1, count);
        swap(arr[start],arr[i]); 
    }
    
}
 
int main (){
int count = 0;
string arr = "abc";
 substring(arr, 0, count);
 cout << endl << count;
return 0;
}