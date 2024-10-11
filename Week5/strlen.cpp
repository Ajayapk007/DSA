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

int main()
{
    char sentence[100];
    cin.getline(sentence, 50);
   int len = strlength(sentence);
   cout << " Your string is :" << sentence << endl << " length of string is: " << len  << endl;

        return 0;
}