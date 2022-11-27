#include <iostream>
using namespace std;
int main()
{

    int n, r, temp, sum = 0;

    cout << "Enter number =";
    cin >> n;
    temp = n;

    while (n != 0)
    {
        r = n % 10;
        cout << r << "\n";
        sum += (r * r * r);
        n /= 10;
    }

    if (temp == sum)
        cout << temp << " is an Armstrong Number..!!";
    else
        cout << temp << " is  not Armstrong Number..!!";
}
