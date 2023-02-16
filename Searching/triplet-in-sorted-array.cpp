#include<iostream>
using namespace std;
// triplet in sorted array function:

// Navie Solution:----------------------------------------------
bool is_triplet(int arr[],int n,int val);
bool is_triplet(int arr[],int n,int val){
    // 1 2 3 4 5 6 7 8 9 10
    for (int i = 0; i < n-2; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (arr[i]+arr[j]+arr[k]==val){
                    return true;
                }
                
            }
            
        }
        
    }
    return false;
    
}

bool is_dounle_pair_efficient(int arr[],int n,int val);
bool is_dounle_pair_efficient(int arr[],int n,int val){
    // T.C=O( )

    int *p_start,*p_end;
    p_start=arr;
    p_end=arr+(n-1);
    while (*p_start!=*p_end)
    {
        int sum=*p_start+*p_end;
        if (sum==val)
        {
            return true;
        }
        else if(sum>val){
            p_end=p_end-1;
        }
        else{
            p_start=p_start+1;
        }
        
    }
    return false;
    
}



bool is_triplet_efficient(int arr[],int n,int val);
bool is_triplet_efficient(int arr[],int n,int val){
    for (int i = 0; i < n-2; i++)
    {
        int temp=val-arr[i];
        if (is_dounle_pair_efficient(arr,n,temp))
        {
            return true;
        }
        
    }
    return false;
    
}


// Good Solution:------------------------


int main(){
    int i=0,j=0,k=0;
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<is_triplet_efficient(arr,10,28)<<endl;
    return 0;
}