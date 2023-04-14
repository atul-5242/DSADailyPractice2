#include<iostream>
using namespace std;
// Q.) Merge-sort

// Merge main function:-
// ------------------------------------------------------THIS CODE THAT I WRITE IS WRONG During Practice----------------------------------------->
// void merge(int arr[],int l,int m,int h)
// {
//     int left=(m+l+1),right=(h-m);
//     int arr1[left],arr2[right];
//     for (int i = 0; i < left; i++)
//     {
//         arr1[i]=arr[i];     
//     }
//     for (int j = 0; j < h; j++)
//     {
//         arr2[j]=arr[right+j];
//     }
//     int i=0,j=0,k=l;
//     while (i<l && j<h)
//     {
//         if (arr1[i]<=arr2[j])
//         {
//             arr[k++]=arr1[i++];
        
//         }
//         else{
//             arr[k++]=arr1[j++];   
           
//         }
   
//     }
//     while (i<l)
//     {
//         arr[k++]=arr1[i++];   
        
//     }
//     while (j<h)
//     {
//         arr[k++]=arr1[j++];            
       
//     }
// }
// ------------------------------------------------------THIS CODE THAT I WRITE IS WRONG----------------------------------------->



// Now the Correct merge function.




// ----------------------------------------I HAVE cOMPLETED THE MERGE SORT CODE:------------------------>
void merge(int arr[],int l,int m,int h){

    int n1=m-l+1,n2=h-m;
    int left[n1],right[n2];
    for(int i = 0; i < n1; i++)
        left[i]=arr[i+l];
    for(int j = 0; j < n2; j++)
        right[j]=arr[m+1+j];
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if (left[i]>=right[j])
            arr[k++]=right[j++];
        else
            arr[k++]=left[i++];
    }
    while(i<n1)
        arr[k++]=left[i++];
    while(j<n2)
        arr[k++]=right[j++];
}
  




// Merge sorting Algorithm:->

void merge_sort(int arr[],int l,int h){
    if (l<h)
    {
        int m=l+(h-l)/2;
        merge_sort(arr,l,m);
        merge_sort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}


int main(){
    int i=0,j=0,k=0;
    int arr[10]={1,43,2,5,6,4,7,8,6,3};
    merge_sort(arr,0,9);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<' ';
    }
    
}