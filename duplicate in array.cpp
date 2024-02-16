#include <iostream>
using namespace std;

void findDuplicate(int arr[], int n)
{
    int flag = 0;
    int duplicate[1000];
    int size = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                duplicate[size] = arr[i];
                size++;
                flag++;
            }
        }
    }
    if (flag == 0)
    {
        cout << "NO duplicate is found." << endl;
    }
    else
    {
        cout << "Duplicate is/are found and duplicate/s is/are : ";
        for (int i = 0; i < size; i++)
        {
            cout << duplicate[i] <<" ";
        }
    }
}

int main()
{
    cout << "Please enter the length of the array: " << endl;
    int n;
    cin >> n;
    cout << "Please enter the elementes of the array you want: " << endl;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    findDuplicate(arr, n);
}