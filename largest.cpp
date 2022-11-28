#include <iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter no of elements in array :";
    cin >> n;
    float arr[n];

    for (i = 0; i < n; ++i)
    {
        cout << "Enter Array Elements :" << i + 1 << ":";
        cin >> arr[i];
    }
    // arr[i]=arr[i];

    for (i = 0; i < n; i++)
    {
        cout << " " << arr[i];
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    cout << " Largest Element is : " << arr[0];
    return 0;
}