#include <iostream>

using namespace std;

void sortFun(int arr[], int size)
{
    int i = 0, j = 0, k = size - 1;

    while (j <= k)
    {

        if (arr[j] == 0)
        {
            swap(arr[j], arr[i]);
            i++;
            j++;
        }
        else if (arr[j] == 1)
        {
            j++;
        }
        else
        {
            swap(arr[j], arr[k]);
            k--;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
}

int main()
{
    int arr[8] = {2, 2, 0, 1, 0, 2, 1, 0};
    int size = 8;
    sortFun(arr, size);
    printArray(arr, size);
    return 0;
}