#include <iostream>
using namespace std;

int findUnique(int arr[], int n)
{
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    cout << "Please enter the length of array" << endl;
    int n;
    cin >> n;
    int arr[1000];
    cout << "Please enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your unique number is : " << findUnique(arr, n);
}