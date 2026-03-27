#include <iostream>
#include <climits>
using namespace std;

    int mini( int arr[], int index, int size, int &min){// min use a pass by reference
        if( index ==  size) return min;
        if( min > arr[index])
        {
            min = arr[index];
        }
       return  mini(arr, index + 1, size, min);
    }

int main (){

int arr[6] ={13,4,632,4,45,2};
int min =   INT_MAX;
cout << " before mini " << min << endl;// min set as pass by reference 
cout << " smallest num is array is " << mini(arr, 0, 6, min) << endl;
cout << " After mini " << min << endl;
 
return 0;
}