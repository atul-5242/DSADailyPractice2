#include<iostream>
#include<algorithm>//in this sort function is defined.
using namespace std;

// navie approch:-------------------
void Union(int arr1[],int arr2[],int size1 ,int size2){
    int arr_temp[size1+size2];
    int j=0;
    for (int i = 0; i < size1; i++)
    {
        arr_temp[j++]=arr1[i];
    }
    
    for (int i = 0; i < size2; i++)
    {
        arr_temp[j++]=arr2[i];
    }
    sort(arr_temp,arr_temp+(size1+size2));
    for (int  i = 0; i < size1+size2; i++)
    {
        if (i==0 || arr_temp[i]!=arr_temp[i-1])
        {
            cout<<arr_temp[i]<<" ";
        }
    }
    
}




// Efficient Approch:-

void Union_Efficient(int arr1[],int arr2[],int size1 ,int size2){
    int i=0,j=0;
    while (i<size1 && j<size2)
    {
        if (i>0 && arr1[i]==arr1[i-1])
            {
                i++;
                continue;
            }
        
        if (j>0 && arr2[j]==arr2[j-1])
            {
                j++;
                continue;
            }
        if (arr1[i]<arr2[j])
            {
                cout<<arr1[i]<<" ";
                i++;
            }
        else if (arr1[i]>arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
    }
    
    while (i<size1)
    {
        if (i==0 || arr1[i]!=arr1[i-1])
        {
            cout<<arr1[i]<<" ";
            i++;     
        }
        
    }
    while (j<size2)
    {
        if (j==0 || arr2[j]!=arr2[j-1])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
    }    

}

// ------------------------------------------------------------------------



int main(){
    int i=0,j=0,k=0;
    int a[]={3,8,10};
    int b[]={2,8,9,10,15};
	
	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
	Union(a,b,m,n);
    cout<<"\n";
	Union_Efficient(a,b,m,n);

    // DONE.
}   