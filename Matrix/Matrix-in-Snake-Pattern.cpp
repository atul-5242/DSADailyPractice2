#include<iostream>
using namespace std;

const int R=3;
const int C=3;

void print_left_to_right(int arr[R][C],int R_no);
void print_right_to_left(int arr[R][C],int R_no);

void print_left_to_right(int arr[R][C],int R_no){
    for (int i = 0; i < C; i++)
    {
        cout<<arr[R_no][i];
    }cout<<endl;
}
void print_right_to_left(int arr[R][C],int R_no){
    for (int i = C-1; i >= 0; i--)
    {
        cout<<arr[R_no][i];
    }cout<<endl;
}


void print_Snake_Game_patter_Matrix(int arr[R][C]){   //T.C->theta(R*C)
    for (int i = 0; i < R; i++)
    {
        if (i%2==0)
        {
            print_left_to_right(arr,i);
        }
        else{
            print_right_to_left(arr,i);
        }
    }
}

int main(){
    
    int arr[R][C]={{1,2,3},{4,5,6},{7,8,9}};
    print_Snake_Game_patter_Matrix(arr);
    // Input:-
    // 123
    // 456
    // 789

    // Output:-
    // 123
    // 654
    // 789
}