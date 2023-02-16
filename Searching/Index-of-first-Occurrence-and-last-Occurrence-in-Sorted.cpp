#include<iostream>
using namespace std;
// Q.)Index of first Occurrence and last Occurrence in Sorted?

// Input : arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125}, x = 5
// Output : First Occurrence = 2
//               Last Occurrence = 5









// Navie Approch:------------------------------------
int first_occur(int arr[],int x,int size){
    for(int i=0;i<size;i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}



int effc_first_occur(int arr[],int x,int l,int r){
    
    if(l<=r){
        int mid;
        mid=l+(r-l)/2;
        if((mid==0 || x>arr[mid-1])&& arr[mid]==x){
                return mid;
            }
        else if(arr[mid]>x){
            return effc_first_occur(arr,x,l,mid-1); 
        }
        else{
            return effc_first_occur(arr,x,mid+1,r);
        }
        
    }
    return -1;
}
                          


int main(){
    int i=0,j=0,k=0;


// Navie Approch we use ittrative approch in O(n) Time complexity.

int arr[] = {1, 3, 5, 5, 5, 5, 67, 123, 125};
cout<<"\n";
cout<<first_occur(arr,5,9)<<endl;//outstanding.
cout<<effc_first_occur(arr,5,0,8);

}