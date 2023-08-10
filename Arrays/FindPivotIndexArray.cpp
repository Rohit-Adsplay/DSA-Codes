#include <iostream>

using namespace std;

void searchPivotIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // to prevent it from getting out of Integer Range i.e. (2^31-1)

    while (start < end)
    {

        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }else{
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    cout <<"Pivot At index Position : " << start;
}

int main()
{

    int num[7] = {7, 8, 12, 1, 3, 5, 6};

    searchPivotIndex(num, sizeof(num) / sizeof(int));

    return 0;
}