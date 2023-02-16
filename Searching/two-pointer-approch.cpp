#include<iostream>
using namespace std;
//Q.) FInding the pair of 2 numbers having sum is equal to given value is present or not. 

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


bool is_double_pair(int arr[],int n,int val);
bool is_double_pair(int arr[],int n,int val){
    // Navie approch:------------------
    // T.C=O(n^2)
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i]+arr[j]==val)
            {
                return true;
            }
            
        }
        
    }
    return false;
    
}

int main(){
    int i=0,j=0,k=0;
    
    
    // int *p_start,*p_end;
    // p_start=arr;
    // p_end=arr+(6-1);



    // FOr every approch discussion we know that it is given that array is always shorted 

    int arr[6]={1,2,3,4,5,6};
    
    cout<<is_double_pair(arr,6,12)<<endl;
    // cout<<*p_end;

    cout<<is_dounle_pair_efficient(arr,6,12)<<endl;//very important.
    return 0;

}