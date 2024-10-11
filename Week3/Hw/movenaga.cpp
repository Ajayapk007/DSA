#include <iostream>
using namespace std;

void moveNagative(int arr[], int count ){
    int start =0; int end =count-1;
    while( start < end){
        if( arr[start] < 0){
            start++;
        }
        else if( arr[end] > 0){
            end--;
        }
        else swap( arr[start], arr[end]);
    }

}
//first round    -4|2|-1|8|-3|9|3
//Second round   

int main()
{
    int arr[7] = {3, 2, -1, 8 ,- 3, 9, -4};
    for (size_t i = 0; i < 7; i++)
    {
       cout << arr[i] << " ";
    }
    cout << endl;
    moveNagative(arr , 7);
    cout <<" After alog apply" << endl;
      for (size_t i = 0; i < 7; i++)
    {
       cout << arr[i] << " ";
    }

    return 0;
}