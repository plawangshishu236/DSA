#include <bits/stdc++.h>
using namespace std;

int selectionSort(int arr[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[minIndex] > arr[j])
            {
                minIndex = j;
            }
            swap(arr[minIndex], arr[i]);
        }
    }
    return arr[n];
}

int main()
{
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    int arr[n];
    cout << "enter the numbers of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    cout << "The sorted array is: ";
    // cout<<selectionSort(arr,n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}