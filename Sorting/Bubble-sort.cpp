// O(n^2)
#include <bits/stdc++.h>

// void Bubble_sort(int arr[],int size){
//     for (int i = 0; i < size-1; i++)
//     {
//         for (int j = 0; j < size-1; j++)
//         {
//             if (arr[j]>arr[j+1])
//             {
//                 swap(arr[j],arr[j+1]);
//                 // int temp=arr[j];
//                 // arr[j]=arr[j+1];
//                 // arr[j+1]=temp;
//             }
            
//         }
        
//     }
    
// }
void Bubble_sort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)

        // Last i elements are already 
        // in place
        for (j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
}
using namespace std;
int main(){
    int i=0,j=0,k=0;
    int arr[10]={1,2,6,4,3,5,46,3,7,5};
    cout<<arr[0]<<endl;
    Bubble_sort(arr,10);
    cout<<arr[0]<<endl;
    // for (auto &&i : arr)
    // {
    //     cout<<i<<" ";//way of taking output of an array in for i: a loop type that it not needed any pointer to get value.
    // }
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<' ';
    }
    
}