#include <iostream>

using namespace std;

void searchHighestElement(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // to prevent it from getting out of Integer Range i.e. (2^31-1)

    while (start < end)
    {

        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }else{
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    cout << "Highest Value in Array is " << arr[start] << " At index Position : " << start;
}

int main()
{

    int num[10] = {2, 4, 6, 7, 8, 12, 5, 1, -123, -325};

    searchHighestElement(num, sizeof(num) / sizeof(int));

    return 0;
}