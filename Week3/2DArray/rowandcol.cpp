#include <iostream>
using namespace std;
 
int main (){

int arr[3][3]={
    {1,2,3},{4,5,6},{7,8,9}
};

cout << "Row-wise print" << endl;;
for (size_t i = 0; i < 3; i++)
{
    for (size_t j = 0; j <3; j++)
    {
        cout << arr[i][j]<< " ";
    }
    cout << endl;
}

cout << " Col-wise Print "<< endl;
for (size_t i = 0; i < 3; i++)
{
    for (size_t j = 0; j <3; j++)
    {
        cout << arr[j][i]<< " ";
    }
    cout << endl;
}

 
return 0;
}