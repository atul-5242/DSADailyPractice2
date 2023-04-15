#include<iostream>
using namespace std;

int last_Occurence(int arr[],int size,int l,int h,int key){
    //this function work well only if the array is sorted beacuse we are performing Binary Search. 
    if (l>h) { return -1;}
   int mid=l+(h-l)/2; 
    if (arr[mid]>key){
            last_Occurence(arr,size,l,mid-1,key);
    }
    else if(arr[mid]<key)
            last_Occurence(arr,size,mid+1,h,key);
    else{
        // if (mid>0 && arr[mid]!=arr[mid+1] && mid!=size-1)  ---this line shows i think wrong approch:---------
        if(mid==size-1  || arr[mid]!=arr[mid+1])
        {
            return mid;
        }
        else{
            last_Occurence(arr,size,mid+1,h,key);
        }
    }
    
}

int main() {
    
   int arr[] = {5, 10, 10, 10, 10, 20, 20}, size = 7;

	int key = 20;

    cout << last_Occurence(arr, size, 0, size,key);
	return 0;

    // Nice I doned it.
}