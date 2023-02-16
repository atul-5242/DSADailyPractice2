#include<iostream>
using namespace std;

void copy(int D,int arr[],int arr_temp[]){
    
    int j=0;
    while(j<D){
        arr_temp[j]=arr[j];
    }
    
}

void shift(int D,int arr[],int arr_temp[],int size){
    int i=0,k=0;
    while(arr[i]!='\0'){
        arr[i]=arr[D+i];
        i++;
    }
    for (int j = (i)-1;j<size ; j++,k++)
    {
        arr[j]=arr_temp[k];
    }
    
}


int main(){
 
    int i=0,j=0,k=0;
    int arr[]={1,2,3,4};
    
    while (arr[i]!='\0')
    {
        i++;
    }
    cout<<i;
    
    
    cout<<"Enter D:";
    int D;
    cin>>D;

    int arr_temp[D];
    copy(D,arr,arr_temp);
    shift(D,arr,arr_temp,i);
    for (int i = 0; i < i; i++)
    {
        cout<<arr[i];
    }
    
}