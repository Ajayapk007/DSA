#include<iostream>
using namespace std;
void moveNegative(int arr[], int n){
    int i=0, j=n-1;
    while(i<j){
        while(arr[i]<0   &&i <j){ // swap when a positive element is encountered
            i++;
        }
        while(arr[j]>0 && i <j){ // swap when a negative element is encountered
            j--;
        }
        swap(arr[i], arr[j]); // swap the elements
    }
}
int main(){
    int n = 5;
    int arr[n] = {2, -3, -1, 5, -4};
    moveNegative(arr, n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

// #include <iostream>
// using namespace std;

//  void movenagative( int arr[], int count){
//     int start =0, end = count -1;
//     int i =0;
//     while(i < count-1){
//         if(arr[i] < 0){
//             swap(arr[i], arr[start]);
//             start++;i++;
//         }
//         else 
//         {
//             swap( arr[i], arr [end]);
//             end--; i++; 
//         }
//     }
//  }

// int main()
// {
//     int arr[5] = {2, -3, -1, 5, -4};
   
//     cout << "Before operation apply" << endl;
//     for (size_t i = 0; i <5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl <<   "After operation apply" << endl;
//     movenagative( arr, 5);

//     for (size_t i = 0; i <5; i++)
//     {
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }