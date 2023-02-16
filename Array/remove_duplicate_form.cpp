#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
void shift(int arr[],int s,int *e){
    int i=0;
    for(i=s;i<*e;i++){
        arr[i]=arr[i+1];
        *e-=1;
    }
}
int main(){
    vector<int> v1{ 10, 20, 30, 40, 50 };
    // int x[] = { 9, 2, 5, 4, 5 };    
    // v1.insert(v1.begin(),1,8);
    // // inserts 3 elements (from array) from 1st index
	// v1.insert(v1.begin() , x + 0, x + 3); 
    // for(int i=0;i<v1.size();i++){
    //     cout<<v1[i]<<" ";
    // }
    reverse(v1.begin(),v1.end());
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";
    }









    int i=0,j=0;
    int e=10;
    int arr[10]={1,2,3,4,2,2,3,3,2,2};
    for ( i = 0; i < e; i++)
    {
        for(int j=0;j<10;j++){
        if (arr[i]==arr[j]){
            shift(arr,j,&e);
            j-=1;
        }
        }
    }
    printf("[");
    for ( i = 0; i < e; i++)
    {
    printf("%d ,",arr[i]);
        
    }
    

    printf("]");
} 