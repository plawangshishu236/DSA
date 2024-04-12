#include <iostream>
using namespace std;

void f(int cnt, int i, int arr[], int n)
{
    if (i > n / 2)
    {
        return;
    }
    else
    {
        if (arr[i] == arr[n - 1])
        {
            cnt++;
            i++;
            n--;
            f(cnt, i, arr, n);
        }
    }
}

int main()
{
    int n = 7;
    int arr[n] = {1, 2, 3, 4, 3, 2, 1};
    int cnt = 0;
    f(cnt, 0, arr, n);
    if (cnt == n / 2)
    {
        cout << "yes";
    }
    else
    {
        cout << "No";
    }
}