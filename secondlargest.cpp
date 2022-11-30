#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 4, 23, 78};
    int i, s = sizeof(arr) / sizeof(arr[2]);
    int largest, second;
    if (arr[0] < arr[1])
    {
        
        largest = arr[1];
        second = arr[0];
    }
    for (i = 2; i < s; i++)
    {
        if (arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] != largest && arr[i] > second)
        {
            second = arr[i];
        }
    }
    cout << largest << endl;
    cout << second << endl;

    return 0;
}