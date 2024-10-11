#include <iostream>
using namespace std;

int main()
{
    int arr[3][3]{{1, 2, 3}, {3, 4, 5}, {5, 6, 7}};
    int mini = INT32_MAX;
    int max = INT32_MIN;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j< 3; j++)
        {
            /* code */
        
        if( mini >arr[i][j])
        {
            mini = arr[i][j];
        }
        else if ( max < arr[i][j]){
            max = arr[i][j];
        }
        }

    }
    cout << max << " and mini " <<  mini;
    

        return 0;
}