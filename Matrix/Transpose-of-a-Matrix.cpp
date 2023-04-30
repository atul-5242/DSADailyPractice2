#include<iostream>
using namespace std;
// Efficient Approch with T.C->?
// Auxilary Space OR exatra space:->O(1)
void transpose_of_matrix(int arr[3][3]){
    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)//Important logic we only taked element except the diagonal element by using this method and each element is taken only Once.
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
    
}

void print_matrix(int arr[3][3]){
    for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout<<arr[i][j]<< " ";
            }cout<<endl;
        }
}

int main(){
        int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
        transpose_of_matrix(arr);
        print_matrix(arr);
    // 1,2,3
    // 4,5,6
    // 7,8,9
}