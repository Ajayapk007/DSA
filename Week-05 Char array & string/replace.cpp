#include <iostream>
using namespace std;

int strlength( char arr[]){
    int i =0; int count =0;
    while( arr[i] != '\0'){
        count++;
        i++;
    }
    return count ;
}


void replace(char arr[]){
    int size = strlength(arr);

    for (int i = 0; i < size; i++)
    {
        if( arr [i] == ' ')
        arr[i] = '@';
    }
    
}

 
int main (){

char sentence[100];
    cin.getline(sentence, 50);
    cout << " Your string is :" << sentence << endl; 
    replace(sentence );
    cout  << " length of string is: " << sentence  << endl;
return 0;
}