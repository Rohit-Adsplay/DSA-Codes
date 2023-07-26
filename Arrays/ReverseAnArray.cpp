#include <iostream>

using namespace std;

void reverseArrayBasic(int arr[], int size)
{
    cout << "Using Basic Way : " << endl;
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " , ";
    }
}

void reverseArrayAdvanced(int arr[], int size)
{
    cout << "Using Advanced Way : " << endl;
    int start = 0, end = size - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " , ";
    }
}

int main()
{
    int num[10] = {2, 4, 6, 7, 8, 12, 2, 4, -123, -325};

    // Basic Way
    reverseArrayBasic(num, sizeof(num) / sizeof(int));

    // Advanced Way
    reverseArrayAdvanced(num, sizeof(num) / sizeof(int));

    return 0;
}