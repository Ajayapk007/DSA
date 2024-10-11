#include <iostream>
using namespace std;

int main(){
    cout << endl << "next" << endl;


    for (int i = 0; i < 3; i++)
    {
        for (int  j = 0; j < (5/2)-i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            if (i==0)
            {
                cout <<"*";
            }
            else {
                for (int i = 0; i <=j ; i++)
                {
                 cout << "*";
                    /* code */
                }
                 }
            
        }
        cout << endl;
        
        
        
    }
    





cout << endl << " next" << endl;

//  int rowcount , colcount;
//  cin >> rowcount >> colcount;

for (int i = 0; i < 6; i++)
{
    for (int j = 0; j < 6-i; j++)
    {
        cout << j+1;
    }
    cout << endl;
}



cout << endl << " next" << endl;

for (int i = 1; i <= 5; i++)
{
    for (int j = 1; j <= i; j++)
    {
        cout << j << " ";
    }
    cout << endl;
    
}




cout << " next" << endl;
for (int i = 0; i < 6; i++)
{
       for (int j = 0; j < 6 -i; j++)
       {
          cout << "* ";
       }
       cout << endl;
}

 

  cout << " next" << endl;

 for (int i = 0; i <= 6; i++)
 {
        for (int j = 0; j <=i ; j++)
        {
            cout<< "* ";
        }
        cout << endl;
    
 }
 





 cout << " Next "<< endl;
    // for (int i = 0; i < rowcount; i++)
    // {
    //     if (i == 0 || i == rowcount-1)
    //     {
    //         for (int i = 0; i < colcount; i++)
    //         {
    //             cout << "* ";
    //         }
    //     }
    //     else
    //     {
    //         cout << "* ";
    //         for (int j = 0; j < colcount-2; j++)
    //         {
    //             cout << "  ";
    //         }
    //         cout << "* ";
    //     }

    //     cout << endl;
    // }




cout << " Next " << endl;


    for (int i = 0; i < 6; i++)
    {
        if (i == 0 || i == 5)
        {
            for (int i = 0; i < 8; i++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 0; j < 6; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }

        cout << endl;
    }

    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}