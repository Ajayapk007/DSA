#include <iostream>
using namespace std;
 
   // void printcount(int num){
   //    if( num == 0){
   //       return;
   //    }
   //    printcount(num -1 );
   //    cout << num << " ";
   // }

   // int power(int n ){
   //    int ans = 2;
   //    for (int i = 1; i < n; i++)
   //    {
   //       cout << "a "<< endl;
   //       ans *= 2; 
   //    }
   //    return ans;
   // }

   // int power(int n){
   //    cout << "a" << endl;
   //    if ( n == 1)
   //       return 2;
      
   //    int resAns = power(n-1);
   //    return resAns * 2;
      
   // }
   
   //fibonacci

   int fibo(int n){  
      // mentos WAY 

      if(n == 0 )
      return 0;
      if ( n == 1)
      return 1;

     return  fibo(n-1) + fibo(n-2);


      // normal way 
      
      // int previous = 1;
      // int moreprevious = 0;
      // int nth;
      // for (int i = 2; i <= n; i++)
      // {
      //    nth = previous + moreprevious;
      //    moreprevious = previous;
      //    previous = nth;
      // }
      // return nth;

   }
   int sum( int n ){
      if( n == 1)
      return 1;
      return n+sum(n-1);
   }

int main (){
// int num =10;

// printcount(num) ;
// cout << endl << power(10);
   cout << sum (3);
   // cout << fibo(7);
return 0;
}