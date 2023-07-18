#include <iostream>
using namespace std;

/*
output ----------

123
123
123

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
        while (col <= number)
        {
            cout << number-col+1;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}