#include<iostream>
using namespace std;
// Lecture 7-
// Q.)Given a binary array arr[] of size N, which is sorted in non-decreasing order, count the number of 1’s in it. 

// Examples: 

// Input: arr[] = {0,0, 0, 0, 0, 1, 1}
// Output: 2

// Input: arr[] = {1, 1, 1, 1, 1, 1, 1}
// Output: 7

// Input: arr[] = {0, 0, 0, 0, 0, 0, 0}
// Output: 0

// For the first occurence:-------
int count_1s(int arr[],int low,int high){
    if(low<=high){
        int mid=low+(high-low)/2;
        if((mid==0 || arr[mid]>arr[mid-1])&&arr[mid]==1){
            return mid;
    }
    else if(arr[mid]<1){
        return count_1s(arr,mid+1,high);
    }
    else{
        return count_1s(arr,low,mid-1);

    }
}
    return -1;
}
int main(){
    int i=0,j=0,k=0;
    int arr[]={0,0,0,0,0,0,1,1,1,1};
    cout<<count_1s(arr,0,10-1)+1<<endl;
    cout<<"The numbers of 1's is:"<<10-count_1s(arr,0,10-1)<<endl;
}
