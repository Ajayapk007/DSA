#include <iostream>
using namespace std;

int missingElement( int arr[], int count){
        for (int i = 0; i < count; i++)
        {
           int index = abs(arr[i]);
            if( arr[index -1]  >0)
           arr[index-1] *= -1;

        }
        for (size_t i = 0; i < count; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
      
        for (size_t i = 0; i < count; i++)
        {
           if( arr[i]> 0){
            return arr[i];
           }
        }
        return -1;
       
}
 
int main (){
int  a[5]= {1,4,2,3,4};

cout << "your missing element is : "<< missingElement(a , 5);
 
return 0;
}