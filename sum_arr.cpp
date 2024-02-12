#include <iostream>
using namespace std;

int sum_arr(int arr[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        sum = sum + arr[i];
    }
    return sum;
}

int main()
{
    int arr[1000];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = sum_arr(arr, n);
    cout << result;
}