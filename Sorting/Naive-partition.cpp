#include <iostream>
using namespace std;

void function(int arr[], int l, int h, int p)
{
    int temp[h - l + 1], index = 0;
    int val=arr[p];
    // for (int i = 0; i < h; i++)
    // {
    //     if (arr[i] <=val)
    //     {
    //         temp[index] = arr[i];
    //         index++;
    //     }
    // }
    for(int i=0;i<=h;i++)
        if(arr[i]<=arr[p] && i != p)
            {
                temp[index]=arr[i];index++;
            }

    temp[index++] = arr[p];//---------------------------------(IMPORTANT)-------------------------------
    // for (int i = 0; i < h; i++)
    // {
    //     if (arr[i] >val && i != p)
    //     {
    //         temp[index] = arr[i];
    //         index++;
    //     }
    // }
   for(int i=l;i<=h;i++)
        if(arr[i]>arr[p])
            {
                temp[index]=arr[i];index++;
            }
   for(int i=l;i<=h;i++)
        arr[i]=temp[i-l];
}
 


int main()
{
    int i = 0, j = 0, index, k = 0;
    int arr[10] = {10, 5, 4, 7, 6, 3, 2, 9, 8, 1}, size = sizeof(arr) / sizeof(arr[0]);
    cout << "Enter Index:";
    cin >> index;

    function(arr, 0, 10-1, index);
    cout << "\n";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
