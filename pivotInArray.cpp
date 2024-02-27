#include<iostream>
using namespace std;
int pivotInArray(int arr[], int size){
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
int main(){

    int arr[6]= {11 ,13, 5, 8, 9, 10 };
   cout<< pivotInArray(arr,6);

}