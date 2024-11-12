#include <iostream>
using namespace std;
 
int main (){

int arr[7]{1,2,3,4,5,6,7};
int arr2[7]{0};

for (int i = 0; i < 7; i++)
{
   arr2[(i+2)%7] = arr[i];
}

for (int i = 0; i < 7; i++)
{
    cout <<arr[i] << " ";
}

cout << endl;
for (int i = 0; i < 7; i++)
{
    cout <<arr2[i] << " ";
}


return 0;
}