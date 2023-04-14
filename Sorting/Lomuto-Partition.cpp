#include <iostream>
using namespace std;
// Lomuto partition algo:-----------------
void Lomuto_Partition(int arr[], int size, int pivote)//Most important algo............
{
    int i = -1;//because we don't know  how many smaller element is present so we take it -1 at starting we don't  know the smaller element so we assume that at satring we don't know how many smaller element so we don't know the smaller element window size so we take it as -1 in starting after that we are incease it .........

    
    for (int j = 0; j < size - 1; j++)
    {
        if (arr[j] < pivote)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1],arr[size-1]);
}


//--------------------------------corner cases code ----------------------------------------------------------------------


//------------------ This will work for all corner cases whether last element is pivot or not.----------------


void Lomuto_Partition_modified(int arr[], int size, int pivote)//Most important algo............
{
    swap(arr[pivote],arr[size-1]);
    int i = -1;//because we don't know  how many smaller element is present so we take it -1 at starting we don't  know the smaller element so we assume that at satring we don't know how many smaller element so we don't know the smaller element window size so we take it as -1 in starting after that we are incease it .........

    
    for (int j = 0; j < size - 1; j++)
    {
        if (arr[j] < pivote)
        {
            i++;
            swap(arr[j], arr[i]);
        }
    }
    swap(arr[i+1],arr[size-1]);
}



int main()
{
    int i = 0, j = 0, k = 0;
    int arr[10] = {10, 5, 4, 7, 3, 6,2, 9, 8, 1 ,};
    int size = (sizeof(arr) / sizeof(arr[0]));
    // Lomuto_Partition(arr,size,6);
    Lomuto_Partition_modified(arr,size,6);
    // T.C=O(n) E.S=O(1)        
    for(auto && i:arr){
        cout<<i<<" ";
    }
}