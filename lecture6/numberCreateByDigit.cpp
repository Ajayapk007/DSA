#include <iostream>
using namespace std;
 void createNumber(int *number, int digit ){
    *number = ((*number) * 10) + digit;
 }
int main (){
    int flag = 1;
    int digit;
    int number = 0;
while (flag)
{
 cout <<"Enter a digit " ;
 cin >> digit;
 createNumber(&number, digit);
 cout << endl<< "New numbe is: " << number << endl;   
 cout <<"For continue press 1 and for break press 0" ;
 cin >> flag; 
}

 
return 0;
}