#include <iostream>
using namespace std;

/*
output ----------

ABC
ABC
ABC

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
            char ch = 'A'+col-1;
            cout << ch;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}