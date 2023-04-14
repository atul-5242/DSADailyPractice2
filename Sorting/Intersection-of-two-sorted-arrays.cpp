#include<iostream>
using namespace std;


// Navie Approch:-----------------T.C=O(n*m)
// void intersection(int num,int arr[],int arr_2[],int size,int size2){
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i]==arr[i-1] && i>1)
//         {
//             continue;
//         }
//         else
//         {
//             for (int j = 0; j < size2; j++)
//             {
//                 if (arr_2[j]==arr[i])
//                 {
//                   cout<<arr_2[j]<<" ";
//                   break;
//                 }   
//             }   
//         }
//     }
// }




// Efficient Approch:-----------------------



void intersection(int a[], int b[], int m, int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i-1]==a[i]){
            i++;
            continue;
        }
        if(a[i]<b[j]){
            i++;
        }
        else if(a[i]>b[j]){
            j++;
        }
        else{
            cout<<a[i]<<" ";
            i++;j++;
        }
    }    
}

// int main() {

// }






int main(){
    // int i=0,j=0,k=0;
        int a[]={3,5,10,10,10,15,15,20,90};
    int b[]={5,10,10,15,30,90};
    	int m=sizeof(a)/sizeof(a[0]);
	int n=sizeof(b)/sizeof(b[0]);
    // int arr[]={1,2,3,4,5,6,7,8,8,8,80};
    // int arr_2[]={1,1,1,2,2,3,4,6,6,66666};
    // intersection(1,arr,arr_2,sizeof(arr)/sizeof(arr[0]),sizeof(arr_2)/sizeof(arr_2[0]));
	intersection(a,b,m,n);
    return 0;
}