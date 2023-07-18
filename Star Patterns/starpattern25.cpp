#include <iostream>
using namespace std;

/*
output ----------

1234554321
1234**4321
123****321
12******21
1********1

 */

int main()
{
    int n;
    cin >> n;

    int row = 1;

    while (row <= n)
    {
        int colStart = 1;
        while (colStart <= n - row + 1)
        {
            cout << colStart;
            colStart++;
        }

        int starStart = 2;
        while (starStart <= row)
        {
            cout << "*";
            starStart++;
        }

        int starEnd = row - 1;
        while (starEnd)
        {
            cout << "*";
            starEnd--;
        }

        int colEnd = 1;
        while (colEnd <= n - row + 1)
        {
            cout << n - row - colEnd + 2;
            colEnd++;
        }

        cout << endl;
        row++;
    }

    return 0;
}