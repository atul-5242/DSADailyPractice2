// Hoare partition

// In this Algo all the element greater than pivot is on the right side and smaller on the left side and the position of pivot is not defined as like Lomuto Partition.

#include<iostream>
using namespace std;

void HoarePartition(int arr[],int size,int pivot){
    int l=0,h=size-1;
    swap(arr[pivot],arr[0]);
    // while (l>=h)
    while(true)
    {
        while(arr[l]<pivot)
        {
            l++;
        }
        while(arr[h]>pivot)
        {
            
            h--;
        }
        if (l>=h)
        {
            return;
        }
        
        swap(arr[l],arr[h]);
        
        // if (arr[l]>pivot && arr[h]<pivot)  //not give answer
        // {
        //     swap(arr[l],arr[h]);
        // }
    }
}


int main() {
	
    int arr[]={5,3,8,4,2,7,1,10};
	
	int n=sizeof(arr)/sizeof(arr[0]);
	
	HoarePartition(arr,n,3);
    // left[3 se chota hona chahiye bass abb sorted me ho ya nhi koi fark nhi padta]   -   right[3 se bada hona chahiye bass abb sorted me ho ya nhi koi fark nhi padta]
	
	for(int x: arr)
	    cout<<x<<" ";
}