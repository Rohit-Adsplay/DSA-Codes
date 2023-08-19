#include <iostream>

using namespace std;

long long int squareRoot(int element) // long long int because int could get out of range.
{
    int start = 0;
    int end = element;
    long long int mid = start + (end - start) / 2; // to prevent it from getting out of Integer Range i.e. (2^31-1)
    long long int ans = -1;

    while (start <= end)
    {
        long long int square = mid * mid;

        if (square == element)
        {
            return mid;
        }

        if (square < element)
        {
            start = mid + 1;
            ans = mid;
        }
        else
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}

double morePrecision(int n, int precision, int tempSol)
{

    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; j * j < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int element;
    cout << "Enter the element you want to Square Root of : ";
    cin >> element;

    int tempSol = squareRoot(element);
    cout << "Root is : " << morePrecision(element, 3, tempSol);

    return 0;
}