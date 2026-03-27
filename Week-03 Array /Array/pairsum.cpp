#include <iostream>
#include <vector>
using namespace std;
 
int main (){
    vector<int>arr1{ 23,5,4,7,56};
    vector<int>arr2{ 43 ,2,4,6,3};

    for (int i = 0; i < arr1.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if( arr1[i] + arr2[j]== 10){
                cout << "Found 10 at pair"<< arr1[i] << ", "<< arr2[j]<< endl;
             }
        }
        
    }
    

 
return 0;
}