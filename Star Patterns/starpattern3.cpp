#include <iostream>
using namespace std;

/*
output ----------

123
456
789

 */

int main()
{
    int number;
    int count = 1;
    cout << "Enter the number : ";
    cin >> number;

    int row = 1;
    while (row <= number)
    {
        int col = 1;
        while (col <= number)
        {
            cout << count;
            col++;
            count++;
        }
        cout << endl;
        row++;
    }

    return 0;
}