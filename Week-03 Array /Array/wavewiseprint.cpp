#include <iostream>
#include <vector>
using namespace std;
    void wavewiseprint( vector<vector<int>> &arr ){
        cout << "Wave-Wise Print"<< endl;
    int col =0;
    while( col < arr[0].size()){
         for (int i = 0; i < arr.size(); i++)
         {
             cout << arr[i][col] << " ";
         }
         col++;
        //   for (int i = 0; i < arr.size(); i++)
        //  {
        //      cout << arr[i][col] << " ";
        //  }
         
    }
        
        
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
int main()
{
    vector<vector<int> >arr = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
     
      printarray( arr);
       wavewiseprint( arr);
    
    

    return 0;
}