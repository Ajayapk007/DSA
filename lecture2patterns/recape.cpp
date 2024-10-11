#include <iostream>
using namespace std;
 
int main (){

int count =6;

for (size_t i = 0; i < count; i++)
{
    for (size_t j = 1; j < count - i; j++)
    {
        cout << " ";
    }
    
   
    for (int j = 0; j < i*2+1 ; j++)
    {   if(i == count -1)
    cout << "#";
        
         else if(i !=0 && j >0 && j < i*2  )
          {
            cout << " ";
          }
          else     cout << "#";
    }
    
    
    
    


    

    cout << endl;
}


 
return 0;
}