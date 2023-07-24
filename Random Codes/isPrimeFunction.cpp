#include <iostream>
using namespace std;

bool isPrime(int number)
{
    for (int i = 2; i < number; i++){\
     if (number % i == 0){
            return false;
        }
    }

     return true;
}

int main()
{

    int number;
    cout << "Enter number : ";
    cin >> number;

    if(isPrime(number)){
        cout<<number<<" is Prime";
    }else{
        cout<<number<<" is not Prime";
    }

    return 0;
}