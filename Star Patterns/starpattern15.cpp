#include <iostream>
using namespace std;

/*
output ----------

D
CD
BCD
ABCD

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
         char ch = 'A' + number-row;
        while (col <= row)
        {
           
            cout << ch;
            ch++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}