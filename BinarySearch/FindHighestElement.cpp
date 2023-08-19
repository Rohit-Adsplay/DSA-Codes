#include <iostream>

using namespace std;

void searchHighestElement(int arr[], int size)
{
    int highElement = 0;
    int position = 0;
    
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > highElement)
        {
            highElement = arr[i];
            position = i;
        }
    }

    cout << "Highest Value in Array is " << highElement << " At index Position : " << position;
}

int main()
{

    int num[10] = {2, 4, 6, 7, 8, 12, 2, 4, -123, -325};

    searchHighestElement(num, sizeof(num) / sizeof(int));

    return 0;
}