#include <iostream>
using namespace std;

int main()
{

    // int arr[3][3]{1, 2, 3, 4, 5, 6, 7, 8, 9};

    // //rowwise print 2D Array 
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //        cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
        
    // }

    // cout << endl;

    // //column-wise print 2DArray

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //        cout << arr[j][i] << " " ;
    //     }
    //     cout << endl;
        
    
    // }


    int arr[3][4];

    for (size_t i = 0; i < 4; i++)
    {
        for (size_t j = 0; j <3 ; j++)
        {
            cin >> arr[j][i];
        }
        
    }
      for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 4; j++)
         {
           cout << arr[i][j] << " ";
        }
       cout << endl;
    
     }
    return 0;
}