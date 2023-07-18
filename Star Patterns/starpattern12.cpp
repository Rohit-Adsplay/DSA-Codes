#include <iostream>
using namespace std;

/*
output ----------

C
BB
AAA

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
            char ch = 'A' + number - row;
            cout << ch;
            col++;
            ch++;
        }
        cout << endl;
        row++;
    }

    return 0;
}