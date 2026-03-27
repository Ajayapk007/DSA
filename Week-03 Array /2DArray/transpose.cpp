#include <iostream>
#include <vector>
using namespace std;
 
int main (){

cout << "Hello" << endl;
int arr[3][3]{1,2,3,4,5,6,7,8,9};

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3 ; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;   
}
cout << endl;   


for (int i = 0; i < 3; i++)
{
    for (int j = i; j < 3 ; j++)
    {
       swap(arr[i][j], arr[j][i]);
    }
    
}

for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3 ; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;   
}

cout << endl;

for (int i = 0; i < 3; i++)
{
    int start = 0; int end = 2;
    while( start < end){
        swap(arr[i][start], arr[i][end]);
        start++;
        end--;
    }
}



for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 3 ; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;   
}
 
return 0;
}