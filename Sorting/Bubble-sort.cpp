// // O(n^2)
// #include <bits/stdc++.h>

// // void Bubble_sort(int arr[],int size){
// //     for (int i = 0; i < size-1; i++)
// //     {
// //         for (int j = 0; j < size-1; j++)
// //         {
// //             if (arr[j]>arr[j+1])
// //             {
// //                 swap(arr[j],arr[j+1]);
// //                 // int temp=arr[j];
// //                 // arr[j]=arr[j+1];
// //                 // arr[j+1]=temp;
// //             }
            
// //         }
        
// //     }
    
// // }
// void Bubble_sort(int arr[], int n)
// {
//     int i, j;
//     for (i = 0; i < n - 1; i++)

//         // Last i elements are already 
//         // in place
//         for (j = 0; j < n - i - 1; j++)
//             if (arr[j] > arr[j + 1])
//                 swap(arr[j], arr[j + 1]);
// }
// using namespace std;
// int main(){
//     int i=0,j=0,k=0;
//     int arr[10]={1,2,6,4,3,5,46,3,7,5};
//     cout<<arr[0]<<endl;
//     Bubble_sort(arr,10);
//     cout<<arr[0]<<endl;
//     // for (auto &&i : arr)
//     // {
//     //     cout<<i<<" ";//way of taking output of an array in for i: a loop type that it not needed any pointer to get value.
//     // }
//     for (int i = 0; i < 10; i++)
//     {
//         cout<<arr[i]<<' ';
//     }
    
// }



// Agin I am doing bubble sort:----------------------------------->


#include<iostream>
using namespace std;


void sort_Bubble(int num,int arr[]){
    for (int i = 0; i < num-1; i++)//here in this loop we need only n-1 ittration if we have n element.
    {
        for (int j = 0; j < num-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return ;
}


// More_Effi_sort_Bubble:------------------>

void More_Effi_sort_Bubble(int num,int arr[]){//Its T.C=>O(n^2)

    for (int i = 0; i < num-1; i++)//here in this loop we need only n-1 ittration if we have n element.
    {
        for (int j = 0; j < num-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return ;
}




// Bubble sort is stable sorting algorithm  [i.e:-) It will not changed the order of equal element. ]:----------------->


// We can optimized the the T.C to O(n) If the array is alredy sorted by this algo if we not use this algo then T.C again become (sqaure of n) because thier will be two times the loop is working.:- 

void Best_bubble_sorted(int num,int arr[]){//Important its T.C=>O(square of n) and [but in sorted form its T.C=>O(n) ].

    for (int i = 0; i < num-1; i++)
    {
        bool swapped=false;
        for (int j = 0; j < num-1-i; j++)
        {
            swapped=true;
            if (arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
        if (swapped==false)
        {
            break;
        }
    }
    return ;
}


int main(){
    int i=0,j=0,k=0;
    int arr[10]={9,1,3,2,5,3,7,6,8,4};
    // sort_Bubble(10,arr);-----------------------
    // More_Effi_sort_Bubble(10,arr);//--------------------------------
    Best_bubble_sorted(10,arr);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
}