#include <iostream>
using namespace std;
int main()
{
    int i, x, temp = 0, r;
    cout << "Enter a number :" << endl;
    cin >> x;
    for (i = x; i > 0;)
    {
        r = i % 10;
        temp = temp * 10 + r;
        i = i / 10;
    }
    cout << temp;
    if (temp == x)
    {
        cout << " its a palindrome " << endl;
    }
    else
    {
        cout << " its not a palindrome ";
    }
    return 0;
}