#include <iostream>
#include <limits.h>

using namespace std;

int sumFunction(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
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

    cout << "Sum is : " << sumFunction(num, size) << endl;
    return 0;
}