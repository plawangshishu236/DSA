#include <iostream>
using namespace std;

int searchInArray(int arr[], int n, int key)
{
    for(int i=0;i<n;i++){
        if(arr[i]== key){
            return 1;
        }

    }
    return 0;
}

int main()
{
    cout << "Enter the length of the array" << endl;

    int arr[1000];
    int n;
    cin >> n;
    cout << "Please enter " << n << " number/s" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Please enter the key number you want to search" << endl;
    int key;
    cin >> key;

    bool found = searchInArray(arr, n, key);

    if (found)
    {
        cout<<"The key value "<< key<<" is present."<<endl;
    }
    else{
        cout<<"key value "<<key<< " is not present."<<endl;
    }
}