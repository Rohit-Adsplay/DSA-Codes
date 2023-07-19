#include <iostream>
using namespace std;

/*
output ----------

0,1,1,2,3,5,8,13,21,34,55,89,

 */

int main()
{

    int number;
    int a = 0;
    int b = 1;

    cout << "Enter number : ";
    cin >> number;
    
    cout << a << "," << b << ",";

    for (int i = 1; i <= number; i++)
    {
        int nextNumber = a + b;
        cout << nextNumber << ",";
        a = b;
        b = nextNumber;
    }
    return 0;
}