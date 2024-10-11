#include <iostream>
using namespace std;
 
int main (){
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6-i; j++)
    {
        cout << "*";
    }

    for (int j = 0; j < i; j++)

    {
        cout << "  ";
    }
    for (int j = 0; j < 6-i; j++)
    {
        cout << "*";
    }
  
    cout << endl;
}
for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < i+1; j++)
    {
       cout << "*";
    }

    for (int j = 0; j < 6-i-1; j++)
    {
        cout << "  ";
    }
    for (int j = 0; j < i+1; j++)
    {
        cout <<  "*";
    }
    
    
    cout << endl;
    
}
cout << endl << endl << endl;
int count = 6;
for (int i = 0; i < count; i++)
{
 for (int j = 0; j < count-i-1; j++)
 {
    cout << " ";
 }
 for (int  j = 0; j <= i; j++)
 {
    if( 0<j && j<i ){
        cout << "  ";
    }else
   cout << " *";
 }
 
 cout << endl;   
}
for (int i = 0; i < count; i++)
{
    for (int j = 0; j <i ; j++)
    {
        cout<< " ";
    }
    for (int j = 0; j < count-i; j++)
    {
         if( 0<j && j<count-i-1){
        cout << "  ";
    }else
   cout << " *";
    }
    
    cout << endl;
}




 
return 0;
}