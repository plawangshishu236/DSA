#include <iostream>
using namespace std;

long long int binarySearchSquareRoot(int n)
{
    int s = 0;
    int e = n;
    long long int mid = s + (e - s) / 2;

    long long int ans = -1;

    while (s <= e)
    {
        long long int square = mid * mid;

        if (square == n)
        {
            return mid;
        }

        if (square < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double sqrtMorePrecision(int n, int tempSol, int precision)
{
    double ans = tempSol;
    double factor = 1;
    for (int i = 0; i < precision; i++)
    {
        factor = factor / 10;

        for (double j = ans; (j * j) < n; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Please enter a number: " << endl;
    cin >> n;
    cout << "Square root in an integer is: " << binarySearchSquareRoot(n) << endl;
    cout<<"Enter the number of precision: "<<endl;
    int precision;
    cin>>precision;
    cout<<"Your final output is: "<<sqrtMorePrecision(n,binarySearchSquareRoot(n),precision);
}
