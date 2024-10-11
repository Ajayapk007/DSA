#include <iostream>
using namespace std;

int main()
{
 int n=6;
    
     cout << endl;
   
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < ((n * 2) - 1); j++)
        {
            if (j < n - 1 - i)
            {
                cout << " ";
            }

            else if (k < (2 * i) + 1)
                {
                    cout << "*";
                    k++;
                }
             else
                cout << " ";
        }
        cout << endl;
    }

    cout << endl;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0 || col == 0 || row == n - 1 || col == n - row - 1)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col < 5 - row; col++)
        {
            cout << col + 1;
        }
        cout << endl;
    }

    cout << endl;
    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }
        cout << endl;
    }

    cout << endl;
    for (int row = 0; row < 6; row++)
    {
        for (int col = 0; col < 6 - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < 6; i++)
    {
        for (int col = 0; col < i + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // hollow rectanel

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (i == 0 || i == 9 || j == 0 || j == 9)

            {
                cout << "*";
            }
            else
                cout << " ";
        }

        cout << endl;
    }
    return 0;
}
