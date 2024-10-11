#include <iostream>

using namespace std;
void printunion(int a[], int b[])
{
    int c[10];
    for (int i = 0; i < 5; i++)
    {

        for (int j = 0; j < 5; j++)
        {

            if (a[i] == b[j])
            {
                b[j] = -1;
            }
        }
    }
    int n = 0;
    for (size_t i = 0; i < 5; i++)
    {
        c[n] = a[i];
        n++;
    }

    for (size_t i = 0; i < 5; i++)
    {
        if (b[i] > 0)
        {
            c[n] = b[i];
            n++;
        }
    }

    for (size_t i = 0; i < n - 1; i++)
    {
        for (size_t j = i + 1; j < n; j++)
        {
            if (c[i] == c[j])
            {
                c[j] = -1;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        if( c[i] > 0)
        cout << c[i] << " ";
    }
}
int main()
{
    int a[5] = {1, 2, 3, 3, 5};
    int b[5] = {2, 3, 4, 3, 6};
    printunion(a, b);
    return 0;
}

// #include <iostream>
// using namespace std;

// void arrayunion(int a[], int b[], int c[], int x, int y, int *z)
// {
//     int j = 0;

//     for (int i = 0; i < x; i++)
//     {
//         for (int j = 0; j < y; j++)
//         {
//             if (a[i] == b[j])
//             {
//                 b[j] = INT16_MIN;
//             }
//         }
//         c[j]= a[i];
//         j++;
//     }
//     for (size_t i = 0; i < y; i++)
//     {
//         if( b[i]!= INT16_MIN)
//         {c[j]= b[i];
//         j++;}
//     }
//     *z = j;

// }

// int main()
// {
//     int a[5] ={1,1,2,3,4};
//     int b[5] = {1,2,5,6,6};
//     int ansarr[10];
//     // cout << "Enter the value of First array:" << endl;
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cin >> a[i];
//     // }
//     // cout << endl
//     //      << "Enter the value of Second  array:" << endl;
//     // for (int i = 0; i < 5; i++)
//     // {
//     //     cin >> b[i];
//     // }

//     int count = 10;
//     arrayunion(a, b, ansarr, 5, 5, &count);

//     cout << "Union of Array First and Second is : " << endl;
//     for (int i = 0; i < count; i++)
//     {
//         cout << ansarr[i] << " ";
//     }

//     return 0;
// }