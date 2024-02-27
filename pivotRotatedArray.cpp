#include<iostream>
using namespace std;

//https://www.codingninjas.com/studio/problems/search-in-rotated-sorted-array_1082554?source=youtube&campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM


int binarySearch(vector<int>& arr, int start, int end, int key) 
{
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

int pivotInArray(vector<int>& arr, int size){
    int start = 0;
    int end = size -1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
        mid = start + (end - start)/2;    
    }
    return start;
}

int search(vector<int>& arr, int n, int k) 
{
    int pivot = pivotInArray(arr, n);

    // If pivot is 0, the array is not rotated
    if (pivot == 0)
        return binarySearch(arr, 0, n - 1, k);

    if (arr[0] <= k && k <= arr[pivot - 1]) // search in left part
        return binarySearch(arr, 0, pivot - 1, k);
    else // search in right part
        return binarySearch(arr, pivot, n - 1, k);
}

int main(){

}