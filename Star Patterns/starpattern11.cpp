#include <iostream>
using namespace std;

/*
output ----------

A
BC
DEF

 */

int main()
{
    int number;
    cout << "Enter the number : ";
    cin >> number;
    int count= 0;


    int row = 1;
    while (row <= number)
    {
        int col = 1;
        while (col <= row)
        {
            char ch = 'A'+count;
            cout << ch;
            count++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}