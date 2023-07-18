#include <iostream>
using namespace std;

/*
output ----------

AAA
BBB
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
        while (col <= number)
        {
            char ch = 'A'+row-1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}