#include <iostream>

using namespace std;

void searchElement(int arr[], int size, int elementToSearch)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elementToSearch)
        {
            cout << "Found at Index Position : " << i;
        }
    }

    cout << "Element Not Found in Array";
}

int main()
{
    int elementToSearch;
    cout << "Enter the element you want to Search : ";
    cin >> elementToSearch;

    int num[10] = {2, 4, 6, 7, 8, 12, 2, 4, -123, -325};

    searchElement(num, sizeof(num) / sizeof(int), elementToSearch);

    return 0;
}