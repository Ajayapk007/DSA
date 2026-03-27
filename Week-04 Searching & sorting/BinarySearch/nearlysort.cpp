#include <iostream>
using namespace std;

void search(int arr[], int target, int count)
{
    int start = 0;
    int end = count - 1;
    int mid =start + (end - start) / 2;
    while (start < end)
    {
        if (arr[mid] == target)
        {
            // cout << " found element " << endl;
            break;
        }
        else if (mid -1 >=  0 && arr[mid - 1] >= target)
            end = mid - 1;
        else if ( mid + 1 < count && arr[mid + 1] <= target)
            start = mid + 1;
           mid = start + (end - start) / 2;
    }
    if( arr[ mid ] == target){
             cout << "Found element at position "<< mid << endl;
    }   
    else
    cout << " Elemnet does not found " << endl;
}
int main()
{
    int arr[7] = {10, 3, 40, 20, 50, 80, 70};
    int target = 10;
    search(arr, target, 7);

    return 0;
}