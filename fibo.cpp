#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, c = 0, count =5,sum=1;
    cout<<"Fibonacci Series="<<a<<" "<<b<<" ";
    for (int i = 0; i < count; i++)
    {
        c=a+b;
        cout <<c<<" ";
       
        a=b;
        b=c;
     sum += c;
    }
    
       cout<<endl<<"Addition of the series is ="<<sum;
}

