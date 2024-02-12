#include <iostream>
using namespace std;

void swapAlternate(int arr[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i + 1 < n)
        {
            swap(arr[i], arr[i + 1]);
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[1000];
    cout << "Enter the length of your array: " << endl;
    int n;
    cin >> n;

    cout << "Please insert elements of the array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Your original array is: ";
    printArray(arr, n);
    cout << endl;
    cout << "Your Alternate reversed array is: ";
    swapAlternate(arr, n);
    printArray(arr, n);

    cout << "Thank You :) ";
}