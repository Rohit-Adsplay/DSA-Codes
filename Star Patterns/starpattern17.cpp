#include <iostream>
using namespace std;

/*
output ----------

****
***
**
*

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

        while (col <= number-row+1)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}