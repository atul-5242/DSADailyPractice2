// Largest Element in the array:-
#include<iostream>
using namespace std;
int largets_element_index(int arr[]){
    
    int i=0,j=0,flag=0;
    
        for ( j = i+1; j < 10; j++)
        {
            if (arr[i]<arr[j]){
                i=j;
            }          
            
       }
        return  arr[i];
    
}
int main(){
    int arr[10]={10,2,5,3,7,8,4,6,1,9};  //array_reation
    
    cout<<largets_element_index(arr);;
}