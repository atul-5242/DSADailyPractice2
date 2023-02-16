#include<iostream>
using namespace std;

void pr_n_1(int n){
    if (n<=0)
    {
        return;
    }
    
    // pr_n_1(n-1);   1 2 3 4 5
    cout<<" "<< n;
    pr_n_1(n-1);  //  5 4 3 2 1
}

int main(){
    pr_n_1(5);
}