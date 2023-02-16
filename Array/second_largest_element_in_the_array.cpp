// // Largest Element in the array:-
// #include<iostream>

// using namespace std;
// int largets_element_index(int arr[]){
    
//     int i=0,j=0,flag=0;
    
//         for ( j = i+1; j < 9; j++)
//         {
//             if (arr[i]<arr[j]){
//                 i=j;
//             }          
            
//        }
//         return  arr[i];
    
// }
// int seconnd_largets_element_index(int arr[]){
//     int arr1[10];
//     int i=0,j=0;
//     while(i!=10){
//         if(largets_element_index(arr)==arr[i]){
//             i=i+1;
//         }
//         arr1[j]=arr[i];
//         i++;
//         j++;
//     }    
//     return largets_element_index(arr1);
// }
// int main(){
//     int arr[10]={10,2,5,3,7,8,4,6,1,9};  //array_reation
    
//     cout<<seconnd_largets_element_index(arr);;
// }



























// // #include<bits/stdc++.h>
// // using namespace std;


// // // } Driver Code Ends
// // // User Function Template for C++ solution

// // class Solution {
// //   public:
// //     vector<long long> nextLargerElement(vector<long long> &arr, int n){
// //         vector<long long>v1;
  
// //     int j;
// //         for(int i=0;i<n;i++){
// //             int j=0;
// //             for(int j=0;j<n;j++){    
// //                 if (arr[i]<arr[j]){
// //                     v1[i]=v1[j];
// //                     break;
// //                 }
                
// //             }
// //             if(j==n-1){
// //                 v1[i]=v1[j];
// //             }
// //         }
// //         return v1;
        
// //     }
// // };

// // //{ Driver Code Starts.

// // int main()
// // {
// //     int t;
// //     cin>>t;
// //     while(t--)
// //     {
        
// //         int n;
// //         cin>>n;
// //         vector<long long> arr(n);
// //         for(int i=0;i<n;i++)
// //             cin>>arr[i];
        
// //         Solution ob;
        
// //         vector <long long> res = ob.nextLargerElement(arr, n);
// //         for (long long i : res) cout << i << " ";
// //         cout<<endl;
// //     }
// // 	return 0;
// // }

// // // } Driver Code Ends

#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6};
    int size=sizeof(arr);
    cout<<size;

}