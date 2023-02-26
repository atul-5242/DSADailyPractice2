// Q.) Count Digits?

long long count_total_digits(long long num){
    long cnt=0;
    while (num!=0)
    {
        num=num/10;
        cnt++;
    }
    return cnt;
}
// T.C=>theta(d)    here d==total number of digits.

#include<iostream>
using namespace std;
int main(){
    int i=0,j=0,k=0;
    cout<<count_total_digits(5487879608968415)<<endl;
}