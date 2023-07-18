#include <iostream>
using namespace std;

/*
output ----------

   *
  **
 ***
****

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
        int space = number - row;
        while (space)
        {
            cout << " ";
            space--;
        }

        while (col <= row)
        {
            cout << "*";
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}