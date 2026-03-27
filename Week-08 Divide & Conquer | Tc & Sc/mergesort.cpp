#include <iostream>
using namespace std;

void mergesort(int [], int ,int);
void merge(int [], int, int);
 
int main (){

    int arr[9] ={9,2,3,5,7,6,8,1};
    cout << "Before using merge sort "<< endl;
    for (size_t i = 0; i < 9; i++)
    {
       cout << arr[i] << " ";
    }
    mergesort(arr, 0, 8);
    cout << endl << "After using mergesort" << endl;
    for (int i = 0; i < 9; i++)
    {
       cout << arr[i] << " ";
    }
 
return 0;
}

void merge(int arr[], int s, int e)
{

    int mid = (s + e)/2;
    int lenLeft = mid - s + 1;
    int lenRight = e - mid;
    //left array and right array creation using dynamic memory
    int *leftArr = new int[lenLeft];
    int *rightArr = new int[lenRight];
    int j = s;
    for (int i = 0; i < lenLeft; i++)
    {
        leftArr[i] = arr[j];
        j++;
    }

     for (int i = 0; i < lenRight; i++)
    {
        rightArr[i] = arr[j];
        j++;
    }

    int indexLeft = 0;
    int indexRight = 0;

    
    while(indexLeft < lenLeft && indexRight < lenRight){
        if(leftArr[indexLeft] < rightArr[indexRight]){
            arr[s] = leftArr[indexLeft];
            s++; indexLeft++;
        }
        else{
             arr[s] = rightArr[indexRight];
            s++; indexRight++;
        }
    }
    // any array is greater than other array
    while( indexLeft < lenLeft){
           arr[s] = leftArr[indexLeft];
            s++; indexLeft++;
    }
    while( indexRight < lenRight){
           arr[s] = rightArr[indexRight];
            s++; indexRight++;
    }

    delete [] leftArr;
    delete [] rightArr;

}

void mergesort(int arr[], int s , int e){
    // cout << s << endl;

    if(s >= e) return;

    int  mid = (s+e)/2;
    
    mergesort(arr, s, mid);
    mergesort(arr, mid+1, e);

    merge(arr, s, e);
}