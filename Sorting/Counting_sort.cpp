#include<iostream>
using namespace std;

// --------------------------------------------------------------------
void countSort(int arr[], int n) {
    int k = arr[0];
    for (int i = 0; i < n; i++) {
        k = max(k, arr[i]);
    }
    int count[k] = {0};
    for (int i = 0; i < n; i++) {
        count [arr[i]]++;
    }
    for (int i = 1; i <= k; i++) {
        count[i] += count[i - 1];
    }
    int output[n];
    for (int i = n - 1; i >= 0; i--) {
        output [--count [arr[i]]] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        arr[i]=output[i];
    }
}
// --------------------------------------------------------------------


void count_SORT(int arr[],int size){
    

    // finding the largest value to make that size of array

    int k=arr[0];
    for (int i = 0; i < size; i++)
    {
        k=max(k,arr[i]);
    }
    
    int count[10]={0,0,0,0,0,0,0,0,0};
    for (int i = 0; i < size; i++)
    {
        count[arr[i]]++;//counting the frequency of each element
    }
    
    // Now modifying our count array to show that how much aage the baada element to the smallest element.
    for (int i = 1; i <= k; i++)
    {
        count[i]=count[i]+count[i-1];
    }

    int output[size];
    for (int i = size-1; i >=0; i--)
    {
        output[--count[arr[i]]]=arr[i];
    }

    // Now again putting the value of output array to original array.

    for (int i = 0; i < size; i++)
    {
        arr[i]=output[i];
    }
}


int main(){
    int i=0,j=0,k=0;
    int arr[]={1,3,4,2,2,3,5,6,7,10};
    count_SORT(arr,9);
    cout<<endl;
    for (auto &&i : arr)
    {
        cout<<i<<" ";
    }cout<<endl;
    
    
}