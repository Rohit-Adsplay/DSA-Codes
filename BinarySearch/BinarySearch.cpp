#include <iostream>

using namespace std;

void searchElementWithBinarySearch(int arr[], int size, int elementToSearch)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // to prevent it from getting out of Integer Range i.e. (2^31-1)

    while (start <= end)
    {

        if (arr[mid] == elementToSearch)
        {
            cout << "Element " << elementToSearch << "'s Position is : " << mid;
            return;
        }

        if (elementToSearch > arr[mid])
        {
            start = mid + 1;
        }
        if (elementToSearch < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    cout << "Element Not Found in Array";
}

int main()
{
    int elementToSearch;
    cout << "Enter the element you want to Search : ";
    cin >> elementToSearch;

    int num[10] = {2, 4, 6, 7, 8, 12, 2, 4, -123, -325};

    searchElementWithBinarySearch(num, sizeof(num) / sizeof(int), elementToSearch);

    return 0;
}