#include <iostream>

using namespace std;

int firstOcc(int arr[], int size, int elementToSearch)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // to prevent it from getting out of Integer Range i.e. (2^31-1)
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == elementToSearch)
        {
            ans = mid;
            end = mid - 1;
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

    return ans;
}

int lastOcc(int arr[], int size, int elementToSearch)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2; // to prevent it from getting out of Integer Range i.e. (2^31-1)
    int ans = -1;

    while (start <= end)
    {

        if (arr[mid] == elementToSearch)
        {
            ans = mid;
            start = mid + 1;
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

    return ans;
}

int main()
{
    int elementToSearch;
    cout << "Enter the element you want to Search : ";
    cin >> elementToSearch;

    int num[10] = {2, 4, 6, 12, 12, 12, 12, 12, 12, 18};

   cout<<"First Occurence position : " <<firstOcc(num, sizeof(num) / sizeof(int), elementToSearch)<<endl;
   cout<<"Last Occurence position : " <<lastOcc(num, sizeof(num) / sizeof(int), elementToSearch)<<endl;

    return 0;
}