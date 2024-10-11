#include <iostream>
using namespace std;
 
int main (){
    int count =5;
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < count-i; j++)
        {
            if( j < count-1)
            cout << " ";
            else cout << j+1;
        }
        cout << endl;
        
    }
    


for (int  i = 0; i < count; i++)
{
   for (int  j = 0; j <=i; j++)
   {
    if ( j>0 && j<i && i < count-1){
        cout << "  ";
    }
    else cout <<" " <<j+1;
   }
   cout << endl;
}

 
return 0;
}