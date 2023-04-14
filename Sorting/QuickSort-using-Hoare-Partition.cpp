#include<iostream>
using namespace std;

int partition(int arr[], int l, int h)
{   
    int pivot=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<pivot);
        do{
            j--;
        }while(arr[j]>pivot);
        if(i>=j)return j;
        swap(arr[i],arr[j]);
    }
}

void QuickSort(int arr[],int l,int h){  //important
    if(l<h){
        int pivot=partition(arr,l,h);
        QuickSort(arr,l,pivot);
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