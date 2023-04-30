#include<iostream>
#include<vector>
using namespace std;

// WAYS OF CREATING DYNAMICALLY ARRAY:->

int main(){
    // -----------------------------------------------------------------------------------------------------------

    //1.) By the help of double pointer.



    // int **arr;
    // int m=3,n=2;
    // arr=new int *[m];// ------> this array is allocated in heap not a noraml array that is allocated in stack. 
    // for (int i = 0; i < m; i++)
    // {
    //     arr[i]=new int [n];// ------> this array is also allocated in heap not a noraml array that is allocated in stack. 
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j]=i+1;
    //     }
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;  
    //     // 2 -col
    //     // 3 -row   
    // }
    
    
    // -----------------------------------------------------------------------------------------------------------
    
    //2.) Array of pointer:-



    // int m=3,n=2;
    // int *arr[3];// ------> this array is allocated in a noraml array that is allocated in stack. 
    // for (int i = 0; i < m; i++)
    // {
    //     arr[i]=new int [n];// ------> this array is allocated in heap not a noraml array that is allocated in stack. 
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i][j]=i+1;
    //     }
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;  
    // }
    // -----------------------------------------------------------------------------------------------------------


    // 3.)Array of vectors:-

    // int m=3,n=2;
    // vector <int> arr[m];
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         arr[i].push_back(j+1);
    //     }
    // }
    // for (int i = 0; i < m; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<arr[i][j]<<" ";
    //     }cout<<endl;
    // }


    // -----------------------------------------------------------------------------------------------------------

    // 4.)Multidimensional Array (2-D) Array by the help of   Vectors of vectors :->
    int m=3,n=2;
    vector<vector<int>>arr;
    for (int i = 0; i < m; i++)
    {
        vector<int>v;
        for (int j = 0; j < n; j++)
        {
            v.push_back(j+1);
        }
        arr.push_back(v);
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}