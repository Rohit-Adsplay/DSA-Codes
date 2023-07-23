#include <iostream>
using namespace std;

int main()
{

    int rupees = 1330;

    switch (0)
    {
    case 0:
        cout << "100 Rupee Notes : " << rupees / 100 << endl;
        rupees = rupees % 100;

    case 1:
        cout << "50 Rupee Notes : " << rupees / 50 << endl;
        rupees = rupees % 50;

    case 2:
        cout << "20 Rupee Notes : " << rupees / 20 << endl;
        rupees = rupees % 20;

    case 3:
        cout << "1 Rupee Notes : " << rupees / 1 << endl;
        rupees = rupees % 1;
    }

    return 0;
}
