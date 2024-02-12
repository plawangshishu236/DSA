#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    for (int i = 0; i < n; i++)
    {
        while (start < end)
        {
            swap(arr[start], arr[end]);
            start++;
            end--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[1000];
    cout << "Enter length of array" << endl;
    int n;
    cin >> n;

    cout << "Enter numbers of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your reversed array is: " << endl;
    reverse(arr, n);
}