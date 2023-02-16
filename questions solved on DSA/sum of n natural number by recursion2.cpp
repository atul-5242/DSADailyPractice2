#include<iostream>
using namespace std;


int fun(int a){
    if (a<1){
        return 0;
    }
    else{
        return a+fun(a-1);
    }
}

int main(){
    printf("%d",fun(5));
}