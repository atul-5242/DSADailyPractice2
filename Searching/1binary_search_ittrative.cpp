#include<iostream>
using namespace std;
int Binary_search(int data,int arr[],int arr_len);
int Binary_search(int data,int arr[],int arr_len){
    int mid,start=0,end=arr_len-1;
    while(start<=end){
        mid=(start+end)/2;
        if(data>arr[mid]){
            start=mid+1;
        }
        else if(data<arr[mid]){
            end=mid-1;
        }
        else if(data=arr[mid]){
            return mid+1;
        }
    }
    
        return -1;  
}
int main(){
    int i=0,j=0,k=0;
    // Q.)we need to find the element if the element is present we have to return its index if it is not present then return -1?
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<"Index is:"<<Binary_search(5,arr,10)<<endl;
    cout<<"Index is:"<<Binary_search(2,arr,10)<<endl;
    cout<<"Index is:"<<Binary_search(8,arr,10)<<endl;
    cout<<"Index is:"<<Binary_search(8923,arr,10)<<endl;
}