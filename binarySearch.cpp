#include<iostream>
using namespace std;
int binarySearch(vector<int>& arr, int start, int end, int key) {
    int mid;
    mid = start + (end - start) / 2;
    while (start <= end) {

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            start = mid + 1;
        else
            end = mid - 1;
    mid = start + (end - start) / 2;
    }
    return -1;
}
int main(){

}