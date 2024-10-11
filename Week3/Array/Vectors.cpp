#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr(5);
    // cout << arr[3]<< endl;
    cout << arr.empty() << endl;
    arr.push_back(4);      
    arr.push_back(4);      
    arr.push_back(4);      
    arr.push_back(4);      
    arr.push_back(4);      
    arr.push_back(4);      
    cout << "The size of Array is " << arr.size()<< endl;
    cout << "The capacity of Array is " << arr.capacity()<< endl;





    //  vector<int>array;
    //  array.push_back(3);
    //  array.push_back(3);
    //  array.push_back(5);
    //  array.push_back(5);
    // cout << "The size of Array is " << array.size()<< endl;
    // cout << "The capacity of Array is " << array.capacity()<< endl;
    // vector<int>a{3,2,4,6,6};

    // a.pop_back();
    // for (int i = 0; i <a.size() ; i++)
    // {
    //     cout << a[i] << " ";
    // }
    //     cout << endl;

    // vector<int>b;

    // b.push_back(3);
    // b.push_back(33);
    // b.push_back(2);

    // for (int i = 0; i <b.size() ; i++)
    // {
    //     cout << b[i] << " ";
    // }

    return 0;
}