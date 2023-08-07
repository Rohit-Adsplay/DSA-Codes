#include <iostream>

using namespace std;

void printArray(int arr[],int size){
    for(int i = 0 ; i<size;i++){
        cout << arr[i] << " , ";
    }
}

void swapAlternate(int arr[], int size)
{
    for (int i = 0; i < size; i+=2 )
    {
        if (i + 1 < size)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void swapWithoutSwapFunction(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i+=2 )
    {
        if (i + 1 < size)
        {
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp;   
        }
    }
}

int main()
{
    int num[7] = {2, 4, 6, 7, 8, 12, 2};

   // swapAlternate(num, sizeof(num) / sizeof(int));
    swapWithoutSwapFunction(num,sizeof(num)/sizeof(int));
    printArray(num, sizeof(num) / sizeof(int));

    return 0;
}