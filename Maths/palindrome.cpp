// Palindrome.
#include<iostream>
using namespace std;

int reverse(int num){
    int temp=0;
    while (num>0)
    {
        temp=temp*10;//important way of finding palindrome.  ITS MY WAY.
        temp=temp+num%10;
        num=num/10;
    }
    return temp;
    
}
int palindrome(int num){
    if (reverse(num)==num)
    {
        return 1;
    }
    return -1;
    
}

// T.C=>theta(d) where d==number of digits in of Given number. 

int main(){
    int i=0,j=0,k=0;
    int num=121;
    cout<<palindrome(num)<<endl;
}