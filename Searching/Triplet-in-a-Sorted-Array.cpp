// Triplet in a Sorted Array
bool is_dounle_pair_efficient(int arr[],int n,int val,int i);//here n means size.
bool is_dounle_pair_efficient(int arr[],int n,int val,int i){
    // T.C=O( )

    int *p_start,*p_end;
    p_start=arr+i;
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

// Naive:----------------------------------------------------------------->
bool Triplet_is_Or_Not(int arr[],int num,int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            for (int k = j+1; k < size; k++)
            {
                if ((arr[i]+arr[j]+arr[k])==num)
                {
                    return true;
                }
                
            }   
        }
    }
    return false;   
}

// ------------------------------------------------------------------------->


// Efficient_Approch:------------>

bool Effi_Triplet_is_Or_Not(int arr[],int num,int size){
    for (int i = 0; i < size; i++)
    {
        int  new_num=num-arr[i];
        if (is_dounle_pair_efficient(arr,size,new_num,i+1))
        {
            return true;
        }
    }
    return false;
}//TC=O(n^2)+O(nlog(n))       =      O(n^2)




#include<iostream>
using namespace std;
int main(){
    int i=0,j=0,k=0;
    int arr[]={
        1,2,3,4,5,6,7,8,9,10
    };
    cout<<Triplet_is_Or_Not(arr,12,10)<<endl;
    cout<<Effi_Triplet_is_Or_Not(arr,56,10);
}