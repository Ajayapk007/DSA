#include <iostream>
#include <vector>
using namespace std;


 
int main (){

vector<vector<int> > arr ={
    {1,0,0,0},
    {1,1,0,0},
    {1,1,0,0},
    {1,0,0,0}
};

for(int i = 0; i < arr.size(); i++){

    for (int j = 0; j < arr[0].size(); j++)
    {
         cout << arr[i][j] << " " ;
    }
    cout << endl;
}

    catRat(arr, );

 
return 0;
}