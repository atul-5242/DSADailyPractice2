#include<iostream>
using namespace std;


// -----------------------Navie Approch-----------------
int count_inversion(int arr[],int size){
    int cnt=0;
    for (int  i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i]>arr[j])
            {
                cnt++;
            }
        }
        
    }
    return cnt;
}

// Efficient Approch by usiong merge sort:------->   //Auxilary Space :- O(n)
// T.C:- O(nlog(n))

int merge_to_count_inv(int arr[],int l,int h,int mid){
    int inv=0;
    int n1=mid-l+1,n2=h-mid;
    // int n1=mid-l,n2=h-mid+1; we this cam not possible.

    int left[n1],right[n2];
    for (int i = 0; i < n1; i++)
    {
        left[i]=arr[l+i];
    }
    for (int i = 0; i < n2; i++)
    {
        right[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=l;
    while (i<n1 && j<n2)
    {
        if (left[i]>=right[j])
        {
            arr[k++]=right[j++];
            inv=inv+(n1-i);//Most important step.
        }
        else{
            arr[k++]=left[i++];
        }
    }
    while (i<n1)
    {
        arr[k++]=left[i++];
    }
    while (j<n2)
    {
        arr[k++]=right[j++];
    }
    return inv;
}

int merge_sort(int arr[],int l,int h){
    int inv=0;
    if(l<h){
        int mid=l+(h-l)/2;
        inv+=merge_sort(arr,l,mid);
        inv+=merge_sort(arr,mid+1,h);
        // inv+=merge_sort(arr,l,mid-1);
        // inv+=merge_sort(arr,mid,h);    why these two line can not be writen like this.
        inv+=merge_to_count_inv(arr,l,h,mid);
    }
    return inv;
}




int main(){
    int i=0,j=0,k=0;
    int arr[5]={2,1,4,3,5};
    int a[5]={5,4,3,2,1};  // for decending order.
    int a2[5]={1,2,3,4,5};  //for accending order
    int size=sizeof(arr)/sizeof(arr[0]);
    int size1=sizeof(a)/sizeof(a[0]);
    int size2=sizeof(a2)/sizeof(a2[0]);
    cout<<merge_sort(arr,0,size-1)<<endl;
    cout<<merge_sort(a,0,size1-1)<<endl;
    cout<<merge_sort(a2,0,size2-1)<<endl;
}