// Insertion sort takes O(1) Auxilary space only
// It is stable.
// Insertion sort array is used for samll size array. It is more prefrable for small size array.


// In python (python uses tim sort:-Tim sort is that it uses merge sort for general purpose arrays and when array size is become small than it will uses or switches to insertion sort.)


// A sorting technique Intro sort:-[It uses heap,quick and insertion sort]


// Tim and Intro is called hybrid algorithm because it uses 2 or 3 sorting algorithm togther according to the requirement of condition. 


// insertion sort requires O(n) times in the Best case.  and the best case happens only when the array is sorted.

// and worst case happen when the array is reverse sorted.

// void insertion_sort(int arr[],int size){
//     for (int i = 0; i < size; i++)
//     {
//         int current=arr[i],index=i;
//         if (current>arr[i+1])
//         {
//             while (index!=0)
//             {
//                 if (arr[i+1]>arr[index])
//                 {
//                     break;
//                 } 
//                 else{
//                     arr[i]=arr[index];
//                 }
                
//                 index--;
//             }
//             int temp=arr[i];

//         }
//     }
    
// }

#include<iostream>
using namespace std;
void insertion_sort(int arr[],int size){
    for (int i = 1; i < size; i++)
    {
        int key=arr[i];//use key variable name that help to increase the understanding. RIGHT.
        int j=i-1;
        while (j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}


int main(){
    int i=0,j=0,k=0;
    int arr[10]={9,1,3,2,5,3,7,6,8,4};
    insertion_sort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
}

// T.C->>>>>>>>>>
// Best Case:theta(n)
// worst case:theat(n^2)
// In General:O(n^2)

