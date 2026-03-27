#include <iostream>
#include <stdlib.h>
using namespace std;

void ajaysort(int arr[], int count)
{
    for (size_t i = 0; i < count; i++)
    {
        for (size_t j = 0; j < count - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int arr[6] = {3,2,5,1,3,0};
    
    ajaysort(arr, 6);

    for (size_t i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}