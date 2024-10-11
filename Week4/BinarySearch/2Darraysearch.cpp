#include <iostream>
using namespace std;

void binarySearch( int arr[][3], int target , int rows , int coln){

    int start =0; int end = rows*coln -1;int i =0;
    int j=0;
    while( start <= end){
        int mid = start + ( end - start)/2;
        i = mid/coln;
        j = mid%coln;
        if( arr[i][j] == target){
            cout << "Found at position "<< mid;
            exit(0);
        }
        if ( arr[i][j]>target)
            end = mid-1;
        else 
        start = mid+1;
    }
        cout << " Does not found" << endl;
}

int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int target = 8;

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
          cout << arr[i][j] << " ";

        }
        cout << endl;
    }
  
    
    binarySearch( arr, target , 3,3);

        return 0;
}