#include <iostream>
#include <math.h>

using namespace std;

int FactorialNum(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int nCr(int n, int r)
{
    int num = FactorialNum(n);
    int denominator = FactorialNum(r) * FactorialNum(n - r);
    return num / denominator;
}

int main()
{
    int n, r;
    cout << "Enter value of N : ";
    cin >> n;
    cout <<"Enter value of R : ";
    cin >> r;

    cout<<"Answer is : "<<nCr(n,r);
    return 0;
}