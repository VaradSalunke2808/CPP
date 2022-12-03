#include<iostream>
using namespace std;
int main()
{
    int j;
    for (int i = 1; i <6; i++)
    {
        for (int a =1; a<6-i ; a++)
        {
            cout << " " ;
        }

        for ( j =2; j<=i; j++)
        {
            cout<< "*";
           // cout<< k++;// cout<< "*" ;
        }
        for (int m = 1; m <=i; m++)
        {
            cout<<"*";
            //cout<< k++;

        }
        cout << "\n" ;
    }

     for ( int l = 4; l>=1; l--)
     {
        for (int u = 4; u >=1+l-1; u--)
        {
             cout<<" ";
        }
        for ( int k=l; k>=2; k--)
        {
            cout<< "*";
        }
        for ( int p=l; p>=1; p--)
        {
            cout<< "*";
        }
        cout<<"\n";
     }
    return 0;
}

        //  for (int i = 0; i <=1; i++)
        //  {
        //     for (int t = 0; t < 2-i; t++)
        //     {
        //         cout<< " ";
        //     }

        //     for (int j = 0; j <=i; j++)
        //     {
        //         cout<< "*" ;
        //         cout << "\n";
        //     }
        //     for (int m =i; m <=i; m++)
        // {
        //     cout<< "*" ;
        // }