#include <iostream>
#include <vector>
using namespace std;
 
int main (){

    vector<vector<int> >arr1(5,vector<int>(5,-8));
    for (size_t i = 0; i < 5; i++)
    {
        for (size_t j = 0; j < 5; j++)
        {
            cout << arr1[i][j] << "  ";
            /* code */
        }
        
        cout << endl;
    }
    




    // vector<vector<int> >arr;
    // vector<int>a{3,2,4};
    // vector<int>b{3,45,6};
    // vector<int>c{2,1,6};
    
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[0].size(); j++)
    //     {
    //         cout << arr[i][j]<< " ";
    //     }
    //     cout << endl;
    // }
    

 
return 0;
}