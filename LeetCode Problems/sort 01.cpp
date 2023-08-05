#include <iostream>

using namespace std;

void sortFun(int arr[], int size)
{
    int i = 0, j = size - 1;

    while (i < j)
    {
        while (arr[i] == 0 && i < j)
        {
            i++;
        }
        while (arr[j] == 1 && i < j)
        {
            j--;
        }

        if (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
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
    int arr[8] = {1, 1, 0, 1, 0, 0, 1, 0};
    int size = 8;
    sortFun(arr, size);
    printArray(arr, size);
    return 0;
}