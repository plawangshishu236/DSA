#include <iostream>
using namespace std;

bool checkPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

int main()
{
    cout << "Please enter a number to check prime or not: " << endl;
    int n;
    cin >> n;
    if (checkPrime(n))
    {
        cout << "The given number is a Prime number." << endl;
    }
    else
    {
        cout << "The given number is NOT a Prime number." << endl;
    }
}