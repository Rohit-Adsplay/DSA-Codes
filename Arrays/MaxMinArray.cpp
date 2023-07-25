#include <iostream>
#include <limits.h>

using namespace std;

int MaxFunction(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int MinFunction(int arr[], int size)
{
    int minInt = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < min)
        // {
        //     min = arr[i];
        // }

        // second way - similar for Max As well.
        minInt = min(minInt, arr[i]);
    }
    return minInt;
}

int main()
{

    int size;
    cout << "Enter the size of array : ";
    cin >> size;

    int num[100];

    // taking input for whole array here
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum Value is : " << MaxFunction(num, size) << endl;
    cout << "Minimum Value is : " << MinFunction(num, size) << endl;
    return 0;
}