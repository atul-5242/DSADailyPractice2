#include<iostream>
using namespace std;
const int R=4;
const int C=4;
void transpose_of_matrix(int arr[R][C]);

// -------------------------------------------------------------------------------------

// -------------------------------------------------------------------------------------
// Navie approch:->
void rotate90(int arr[R][C]){  //this is not efficient approch .here auxilary space is needed. 
    int temp[R][C];
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            temp[C-j-1][i]=arr[i][j];
        }
    }


    for (int i = 0; i < R; i++){
        for (int j = 0; j < C; j++){
            arr[i][j]=temp[i][j];
        }
    }
}

// -------------------------------------------------------------------------------------

// Efficient approch by gfg:->
void Efficient_rotate90(int arr[R][C]){ 
    transpose_of_matrix(arr);
    for (int i = 0; i < R; i++)
    {
        int  low=0,high=C-1;
        while (low<high)
        {
            swap(arr[low][i],arr[high][i]);
            low++;
            high--;
        }
    }
}


// -------------------------------------------------------------------------------------


// -------------------------------------------------------------------------------------
// Efficient approch by me : - >

void transpose_of_matrix(int arr[R][C]){
    for (int i = 0; i < R; i++)
    {
        for (int j = i+1; j < C; j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}

void swap_function(int arr[R][C]){
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C/2; j++)
        {
            swap(arr[i][j],arr[i][C-j-1]);
        }
    }
}


void print_matrix(int arr[R][C]){
    for (int i = 0; i < R; i++)
        {
            for (int j = 0; j < C; j++)
            {
                cout<<arr[i][j]<< " ";
            }cout<<endl;
        }
}
// -------------------------------------------------------------------------------------



int main(){
    int arr[R][C] = {{1, 2, 3, 4},
				   {5, 6, 7, 8},
				   {9, 10, 11, 12},
				   {13, 14, 15, 16}};
    // cout<<"\nThis is by 1:"<<endl;
    // swap_function(arr);
    // transpose_of_matrix(arr);
    // print_matrix(arr);
    // cout<<"\nThis is by 2:"<<endl;
    // rotate90(arr);
    // print_matrix(arr);

    cout<<"\nThis is by 3:"<<endl;
    Efficient_rotate90(arr);
    print_matrix(arr);
// 4 8 12 16
// 3 7 11 15
// 2 6 10 14
// 1 5 9 13
}