#include <iostream>
using namespace std;

int main()
{
    int arr[3][3]{{1, 2, 3}, {3, 4, 5}, {5, 6, 7}};
    int sumarr[3];

    for (size_t i = 0; i < 3; i++)
    {
        int sum =0; 
       for (size_t j = 0; j < 3; j++)
       {
        cout << arr[i][j] << " ";
        sum += arr[j][i];
       }
       sumarr[i]= sum;
       cout << endl;
       
    }
    for ( int i = 0; i < 3; i++)
    {
       cout << sumarr[i] << endl;
        
    }
    
    return 0;
}