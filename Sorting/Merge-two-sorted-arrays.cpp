#include<iostream>
using namespace std;
int* merge_(int a[],int b[],int size_n1,int size_n2,int arr[]){
    int i=0,j=0,k=0;
    while (i<size_n1 && j<size_n2)
    {
        if (a[i]<=b[j])
        {
            arr[k++]=a[i++];
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while (i<size_n1)
    {   
        arr[k++]=a[i++];
    }
    while (j<size_n1)
    {   
        arr[k++]=a[j++];
    }
    return arr;
}

int main(){
    int i=0,j=0,k=0;
    int a[]={10,15,20,40};
    int b[]={5,6,6,10,15};
	int arr[9];
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	int *ptr=merge_(a,b,m,n,arr);
    for (int i = 0; i <9; i++)
    {
        cout<<ptr[i]<<' ';
    }
    
}