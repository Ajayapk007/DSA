#include <iostream>
using namespace std;
 
    void printsubstring(int arr[],int start, int thisele, int end){
        if( start == end){
            return;
        }
        for (int i = start; i <= thisele; i++)
        {
            cout << arr[i] << " ";
            if(arr[i] == arr[end-1])
            {
            start = start + 1;
            thisele = 0;
            }
        }
        cout << endl;
        printsubstring(arr, start,  thisele+1, end);
    }


int main (){

int arr[4] ={1,2,3,4};

    printsubstring(arr,0, 0, 4);
 
return 0;
}

