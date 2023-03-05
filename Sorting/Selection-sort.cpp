// Selection Sort:--------------Not a stable algorithm.------------------------
#include<iostream>
using namespace std;
void Selection_Sort(int arr[],int num){//T.C=>O(n^2) what ever sorted revese sorted.

    for (int i = 0; i < num; i++)
    {
        int min=i;
        for (int j = i+1; j < num; j++)//important algo here j=i+1 because 1st time comparing with zeroth index .
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }            
        }
        swap(arr[min],arr[i]);
    }   
}
// cout << "\nMin Element = "
// 		<< *min_element(arr, arr + n);
    
// 	// Find the maximum element
// 	cout << "\nMax Element = "
// 		<< *max_element(arr, arr + n);
int main(){
    int i=0,j=0,k=0;
    int arr[10]={9,1,3,2,5,3,7,6,8,4};
    Selection_Sort(arr,10);
    for (int i = 0; i < 10; i++)
    {
        cout<<arr[i]<<" ";
    }
}