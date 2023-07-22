#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    int ans = 0;
    int i = 0;

    cin >> n;

    while (n != 0)
    {
        int bit = n & 1;                // Used to get the last bit
        ans = (bit * pow(10, i)) + ans; // Formula to Reverese the bit storing
        n = n >> 1;                     // Right Shift
        i++;
    }
    cout<<"Decimal : "<<n<<" to Binary is : "<<ans;

    return 0;
}