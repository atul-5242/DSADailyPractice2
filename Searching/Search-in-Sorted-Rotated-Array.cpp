




#include<iostream>
using namespace std;
// Navie Solution:-------------------------------------------------------------------->
int Search_in_Sorted_rotated_array(int arr[],int x,int size){
    for (int i = 0; i < size; i++)
    {
        if (arr[i]==x)
        {
            return i;
        }
    }
        return -1;
    
}
// ----------------------------------------------------------------------------------->



// Efficient SOlution:----------------------------------------------------------------->
int Effi_SISRA(int arr[],int x,int size){
    int high=size,low=0,mid;
    while(low<=high){
        mid=(low+high)/2;
        if (arr[mid]==x)
        {
            return mid;
        }
        if (arr[mid]>arr[low])
        {
            if (x<arr[mid] && x>arr[low])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            
        }
        else{
            if (x>arr[mid] && x<arr[high])
            {
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
    }    
    return -1;
}
int main(){
    int i=0,j=0,k=0;
    int arr[]={3,4,5,6,7,8,9,10,1,2};
    cout<<Search_in_Sorted_rotated_array(arr,2,10)<<endl;
    cout<<Effi_SISRA(arr,2,10)<<endl;
}