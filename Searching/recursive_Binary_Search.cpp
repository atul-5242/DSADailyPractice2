#include<iostream>
using namespace std;
//By recursive Way:-
int Binary_Search_recursive(int data,int arr[],int start,int end){
    if (start<end)
    {
    
    int mid=(start+end)/2;
    if (arr[mid]==data)
    {
        return mid+1;
    }

    if(data<arr[mid]){
        return Binary_Search_recursive(data,arr,start,mid-1);
    }
    else if(data>arr[mid]){
        return Binary_Search_recursive(data,arr,mid+1,end);
    }
        
    }

    return -1;
}
int main(){
    int i=0,j=0,k=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    // 10-1=n-1
    cout<<Binary_Search_recursive(99,arr,0,10-1)<<endl;
    cout<<Binary_Search_recursive(9,arr,0,10-1)<<endl;
}