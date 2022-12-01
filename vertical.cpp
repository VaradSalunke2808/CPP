#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for ( i = 1; i <= 10; i++)
    {
        for ( j  = 1; j <=8 ; j++)
        {
            if (j<=8)
            
                cout<< j <<"*"<<i<<"="<< i*j<<"\t";
            
            else
            
               cout<< j <<"*"<<i<<"="<< i*j;
            }
            cout << endl ;
        }     
        
    }
    
   


        // int i=1;
        // while (i<=10)
        // {
        //    int j=1;
        //     while(j<=10)
        //     {
        //         if (j<=10)            
        //         cout<< j <<"*"<<i<<"="<< i*j<<"\t";
            
        //     else            
        //        cout<< j <<"*"<<i<<"="<< i*j;
               
        //        j++;
            
        //     }
            
        //     cout<<endl;
        //     i++;