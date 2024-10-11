#include <iostream>
#include <vector>
using namespace std;
void Rotate( vector<vector<int>> &arr){
    int temp = 0;
    
}

void printarray( vector<vector<int>> &arr){
    cout << " Normal Print "<< endl;
    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = 0; j < arr[0].size(); j++)
        {
           cout << arr[i][j] << "       ";
        }
        cout << endl;
        
    }
    }
 
int main (){

     vector<vector<int> >arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    printarray( arr);
    Rotate(arr);
    printarray( arr);
 
return 0;
}