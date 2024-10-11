#include <iostream>
using namespace std;
 
 void lastocc(char arr[], int index, int key, int size, int &answer){
    if( index == size ){
        return ;
    }
    if(arr[index] == key)
    answer = index;
    
    lastocc(arr, index + 1, key ,8,answer );
    
 }


int main (){

    char arr[8] ={'a','b','c','d','d','e','d','f'};
    int index = 0;
    int key = 'a';
    int answer;
     lastocc(arr, index, key ,8,answer );
    cout << "Index which has last occurence of key value " << answer << endl;
return 0;
}