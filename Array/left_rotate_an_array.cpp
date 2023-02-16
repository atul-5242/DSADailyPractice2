#include<iostream>
using namespace std;
int main(){
 
    int i=0,j=0,k=0;
    int arr[10]={1,2,3,4,5,6};
    while (arr[i]!='\0')            
    {
        i++;
    }
    // cout<<i;
    int temp=arr[0];
    // cout<<temp;
    for (j= 1; arr[j]!='\0';j++){
        arr[j-1]=arr[j];
    }
    arr[i-1]=temp;
    for (int i = 0;arr[i]!='\0'; i++)
    {
        cout<<arr[i];
    }
    
}


// DONE.