#include <iostream>
using namespace std;

/*
output ----------

A
BB
CCC

 */

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;

    int row = 1;
    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A' + row - 1;
            cout << ch;
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }

    return 0;
}