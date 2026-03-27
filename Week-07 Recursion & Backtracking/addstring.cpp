#include <iostream>
#include <string>

using namespace std;

int main() {
    string a = "123456";
    string b = "11";
    
    cout << a[3] << endl;
    int n = a[3] -'0';
    cout << n << endl;

    // int size1 = a.length();
    // int size2 = b.length();

    // cout << a[1] + b[1];

    // for(int i = size1 - 1, j = size2 - 1; i >= 0, j >= 0; i--, j-- )
    // {
        
    //     a[i] = a[i] + b[j];
    // }

    // for (int i = 0; i < size1; i++)
    // {
    //     cout << a[i];
    // }
    

    return 0;
}
