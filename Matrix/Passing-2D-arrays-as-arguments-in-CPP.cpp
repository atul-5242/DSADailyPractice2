#include<iostream>
#include<vector>
using namespace std;





//----------------------------------------------------------------------------

// Now What is the motive of this file :-
// "This video talks about challenges we face when we pass multidimensional arrays as arguments.Codes:"

// Solution to write general purpose matrix Method:-


// void arr(int arr[][2],int size){     arr[][2]<----  Important point.  this is Allowed . 
    // arr[3][2]<---  Allowed
    // arr[][] <-- Not allowed.
// }  



// "This video talks about challenges we face when we pass multidimensional arrays as arguments.Codes:-------------------------------->"


// 1.)   <--------------- Using Double pointer -------------------------->




// void print(int **arr,int m,int n){
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
// }
// // way of creation of dynamically to create pointer is (  new int*[m];  ) and as we do below we can store this Dynamically created pointers address into another double pointer(arr=new int*[m];)<---Like this.



// int main(){
//     int **arr;
//     int m=3,n=2;
//     arr=new int*[m];
//     cout<<"Form main function:\n";
//     for (int i = 0; i < m; i++)
//     {
//         arr[i]=new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             arr[i][j]=i+1;
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     }
//     cout<<"Form print function:\n";
//     print(arr,m,n);
// }




//2.)   <---------------------- Using Array of pointer --------------------------->


// void print(int *arr[],int m,int n){   //here passing the array of (array of pointers) in the function.
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             cout<<arr[i][j]<<" ";
//         }cout<<endl;
//     } 
// }

// int main(){
//     int m=3,n=2;
//     int *arr[m];//this (array of pointers) is created in the stack.
//     for (int i = 0; i < m; i++)
//     {
//         arr[i]=new int[n];
//         for (int j = 0; j < n; j++)
//         {
//             arr[i][j]=i+1;
//         }
//     }
//     print(arr,m,n);
// }



//3.)   <---------------------- Using Array of Vectors --------------------------->


void print(vector<int>arr[],int m){
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}


int main(){
    int m=3,n=2;
    vector<int>arr[m];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i].push_back(i+1);
        }
    }

    // print(arr,m);
    


}

// See in last advantage and disadvantage in the last of the video okey.