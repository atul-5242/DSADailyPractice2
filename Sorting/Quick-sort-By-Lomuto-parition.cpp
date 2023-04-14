#include<iostream>
using namespace std;

int partition(int arr[], int low, int h)
{
    int i = low-1;
    for (int j = low; j <= h-1 ; j++)
    {
        if (arr[j] < arr[h])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return i+1;
}


void QuickSort(int arr[],int l,int h){  //important
    if(l<h){
        int pivot=partition(arr,l,h);
        QuickSort(arr,l,pivot-1);
        QuickSort(arr,pivot+1,h);
    }
}

int main(){
    int i=0,j=0,k=0;
    int arr[]={2,42,4,3,5,5,67,3};
    int h=8;
    QuickSort(arr,0,h-1);
    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}