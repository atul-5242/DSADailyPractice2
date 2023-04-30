// print_Matrix_in_Snake_game_formate.
#include<iostream>
using namespace std;

// Q.)The video discusses solution to print a matrix in snake pattern (first row should be printed from left to right, second row from right to left, and so on).
const int R=3;
const int C=3;
    //Done for Boundry of Matrix.

//T.C->theta(R+C)


void print_Boundry(int arr[R][C]){
    // <----------------------------These are the corner cases.---------------------->
    if (R==1)
    {
        for (int i = 0; i < C; i++)
        {
            cout<<arr[0][i];
        }
    }
    if (C==1)
    {
        for (int i = 0; i < R; i++)
        {
            cout<<arr[i][0];
        }
    }
    // <------------------------------------------------>
    else{
        for (int i = 0; i < C; i++)
        {
            cout<<arr[0][i]<<" ";
        }cout<<endl;
        for (int i = 1; i < R; i++)
        {
            cout<<arr[i][C-1]<<" ";
        }cout<<endl;
        for (int i = C-2; i >=0 ; i--)
        {
            cout<<arr[R-1][i]<<" ";
        }cout<<endl;
        for (int i = R-2; i >= 1; i--)
        {
            cout<<arr[i][0]<<" ";
        }cout<<endl;
    }
}


int main(){
    int arr[R][C]={{1,2,3},{4,5,6},{7,8,9}};
    print_Boundry(arr);
    // 1,2,3
    // 4,5,6
    // 7,8,9
}