#include<iostream>
using namespace std;
// Navie Approch:---------------------------------------------------------------------------------->

int search_in_infinte(int arr[],int x){

    int i=0;
    while(1){
 
        if(arr[i]==x){
            return i+1;
        }
        if (arr[i]>x)
        {
            return -1;
        }
        i++;
    }
}

// ------------------------------------------------------------------------------------------------>


// Efficent Approch is:============================================================================>

int Effi_search_in_infinte(int arr[],int x){
    // 1st we explicity handel 0 because we are trying to double the index so if not check that it is zero or not than it continuously we get zero to compare after multiplication with zero.
    if (arr[0]==x)
    {
        return 0;
    }
    int i=0;
    while(arr[i]>x){
        i++;
    }
    
    
}



int main(){
    int i=0,j=0,k=0;
    // Q.)Array in Sorted order:-
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int num;
    cout<<"Enter num:";
    cin>>num;
    string str;
    if (search_in_infinte(arr,num)==-1)
    {
        str="Elemnet is not present so return value is:";
    }
    else{
        str="The Element is present at index";
    }
    cout<<str<<search_in_infinte(arr,num)<<endl;
    
}