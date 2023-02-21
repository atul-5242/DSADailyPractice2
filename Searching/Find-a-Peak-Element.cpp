// Q.) Find-a-Peak-Element.cpp



// Naive Solution:
// Example:

// Input: array[]= {5, 10, 20, 15}
// Output: 20
// Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20.

// Input: array[] = {10, 20, 15, 2, 23, 90, 67}
// Output: 20 or 90
// Explanation: The element 20 has neighbors 10 and 15, both of them are less than 20, similarly 90 has neighbors 23 and 67.


#include<iostream>
using namespace std;
// We have to return only one of the peek element :->
// Nive Aprroch:------------------------>


int peek_element(int arr[],int size){
    if (size==1)
    {
        return arr[0];
    }
    

    if (arr[0]>=arr[1])
    {
        return arr[0];
    }
    else if (arr[size-1]>=arr[size-2])
    {
        return arr[size-1];
    }

        for (int  i = 1; i < size-1; i++)
        {
            if (arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
            {
                return arr[i];
            }
            
            
        }

    return -1;
    
}

// ---------------------------------------------------------------------------->


// Effic_Approch:--------------------->


int Effic_peek_element(int arr[],int size){
    int high=size-1,low=0;
    while (low<=high)
    {
        int  mid=low+(high-low)/2;
        if ((mid==0 || arr[mid]>=arr[mid-1])&& (mid==high || arr[mid-1]<=arr[mid]))
        {
            return arr[mid];
        }
        if (arr[mid]<arr[mid-1])
        {
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return -1;
}

int main(){
    int i=0,j=0,k=0;
    int arr[]= {10, 20, 15, 2, 23, 90, 67};
    // int arr[]= {5, 10, 20, 15};
    cout<<sizeof(arr)/sizeof(int)<<endl;
    cout<<peek_element(arr,sizeof(arr)/sizeof(int))<<endl;
    cout<<Effic_peek_element(arr,sizeof(arr)/sizeof(int));
}