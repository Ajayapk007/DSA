#include <iostream>
using namespace std;
 
 int missingElement(int arr[], int size){
    int i = 0;
    size = size - 1;
    while(i < size){
        int index = arr[i] - 1;
        if(arr[i] != arr[index]){
            swap(arr[i], arr[index]);
        }
        else{
            i++;
        }
    }

    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] <<" "  ;
    }
    for (int i = 0; i <= size; i++)
    {
        if( (i+1) != arr[i]) return i+1;
    }
 
    
 }

int main (){

    int arr[] = {1,3,6,2,4,3};
    cout << "Ajay Pal " << endl;
    int ans = missingElement(arr, (sizeof(arr)/4)) ;
    cout << endl << "Missing element is:  " << ans << endl;
    cout << endl << "repeated element is:  " << arr[ans-1] << endl;
 
return 0;
}