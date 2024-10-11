#include <iostream>
using namespace std;

 void reverseString( char name[])
 {
    int lenght =0; int i =0;
    while(name[i] != '\0'){
        lenght++;
        i++;
    }
    i =0; int j = lenght -1;
    while (i <j ){
        swap( name[i], name[j]);
        i++ ; j--;
    }
 }
int main (){

 char name [100] = "AJAY";

 cout << " initially name "  << name << endl; 

 reverseString( name); 

 cout << " after revers "<< name;
 
return 0;
}