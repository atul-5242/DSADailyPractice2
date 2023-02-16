#include<iostream>
#include <stdint.h>
using namespace std;
int64_t trailing_zero(int num);
int64_t trailing_zero_offact(int num);
int64_t trailing_zero_offact(int num){
    int64_t fact=1;
    for (int i = 2; i <= num; i++)
    {
    fact=fact*i;
    }
    int64_t z=trailing_zero(fact);
    return z;

}
int64_t trailing_zero(int num){
    int64_t r=0;
    int64_t cnt=0;
    while(num%10==0){
        r=r%10;
        num=num/10;
        if (r==0){
            cnt++;
        }
        else{
        return -1;
        }
    }
    return cnt;
    
}
int main(){
    cout<<trailing_zero(100020)<<"\n";
    cout<<"This:";
	cout<<trailing_zero_offact(15)<<"\n";
}
