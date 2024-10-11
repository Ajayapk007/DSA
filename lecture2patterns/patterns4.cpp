#include <iostream>
using namespace std;
 
int main (){

int n = 6;
    
    for (int i = 0; i < n; i++)
    {
        int k =0;
        for (int j = 0; j < ((n*2)-1); j++)
        {
            if (j< n-i-1)
            {
                cout << " ";
            }

            else if( k< ((i*2)+1))
            {
                if ( i == n-1){
                    cout << "*";
                    
                }
                else
                if (  n-k-i  < j && j < (n+ i-1))
                {
                    cout << "3";
                }
                else cout << "*";

                
                k++;
            }
        }
        cout << endl;
        
    }
    
 
return 0;
}