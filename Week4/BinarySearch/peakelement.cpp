#include <iostream>
using namespace std;

int peakElement(int arr[], int count)
{
    int start =0; int end = count -1;
    while ( start < end){
        int mid = start + (end - start)/2;
        if( arr[mid] < arr[mid+1]){
            start = mid+1;

        }
        else {
            end = mid;
        }
    }
    return end;
}
int main()
{

    int arr[8] = {0,4,6, 10, 5, 3,2,1};

    cout << "Your peak element is " << peakElement(arr, 4) << endl;

    return 0;
}