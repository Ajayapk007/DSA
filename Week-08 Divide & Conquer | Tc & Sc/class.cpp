#include <iostream>
using namespace std;

void printarr(int arr[][3]){
    for( int i = 0; i < 3; i++)
    {
        for(int j =0;  j < 3; j++)
        cout << arr[i][j] << " ";
        
        cout << endl;
   }
   cout << endl;
}
 void multiarr(int a[][3], int b[][3], int c[][3]){

    for(int i =0; i < 3; i++){
        for(int j =0; j < 3; j++){

            for(int k = 0 ; k < 3; k++)
            c[i][j]= c[i][j] + a[i][k]* b[i][k];
        }
    }
 }


int main (){
int a[3][3] =  {1,1,1,1,1,1,1,1,1};
int b[3][3] = {1,1,1,1,1,1,1,1,1};
int c[3][3] ={0};

    printarr(a);
    printarr(b);
    multiarr(a,b,c);
    printarr(c);

    
 
return 0;
}
