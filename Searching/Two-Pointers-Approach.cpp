//Q.)we have to find that Sum pair is present or not in sorted array?



//Navie Approch:--------------------------------------------------------> 
bool pair_present_or_not(int arr[],int num,int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if((arr[i]+arr[j])==num){
                return true;
            }
        }
    }
    return false;
}

// --------------------------------------------------------------------->

// Effic_pair_present_or_not:------------------------------------------->
bool Effic_pair_present_or_not(int arr[],int num,int size){
    int left=0,right=size;
    while(left<right){//we not write like while(left<=right) we can not put equality here left== right in while because we have to find the pair of element not a single element.
        if (arr[left]+arr[right]==num)
        {
            return true;
        }
        
        else if (arr[left]+arr[right]>num)
        {
            right=right-1;
        }
        else{
            left=left+1;
        }
    }
    return false;
}

#include<iostream>
using namespace std;
int main(){
    int i=0,j=0,k=0;
    int arr[]={0,1,2,3,4,7,9};
    // cout<<pair_present_or_not(arr,90,7)<<endl;
    cout<<Effic_pair_present_or_not(arr,90,7)<<endl;
}