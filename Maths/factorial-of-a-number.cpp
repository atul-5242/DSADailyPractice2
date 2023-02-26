#include<iostream>
using namespace std;

// Efficient Approch:------------is ittrative factorial because both recursive and ittrative take O(n) T.C but ittrative A.S=O(1) but A.S of recurssive is O(n)---Here A.S=Auxilary space----------->


int factorial_(int num){//so this is the better.
    int val=1;
    for (int  i = 2; i <= 5; i++)
    {
        val=val*i;
    }
    return val;
}



// Recursive way to find:-
int fact_recursive(int num){
    if (num==0)
    {
        return 1;
    }
    return num*fact_recursive(num-1);
}

int main(){
    int i=0,j=0,k=0;
    // cout<<factorial_(5);
    cout<<fact_recursive(5);
}