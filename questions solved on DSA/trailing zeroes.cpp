#include<iostream>
using namespace std;
int trailing_zero(int num);
int trailing_zero_offact(int num);


int fun_fact_trailing_optimize_code(int num){
    int sum=0;
    for (int i = 5; i < num; i=i*5)//here writing i=5 at starting is most important.
    {
        int j=0;
        sum=sum+num/i;
    }
    return sum;
    
}


int trailing_zero_offact(int num){
    int fact=1;
    for (int i = 2; i <= num; i++)
    {
    fact=fact*i;
    }
    int z=trailing_zero(fact);
    return z;

}
int trailing_zero(int num){
    int r=0;
    int cnt=0;
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
	cout<<trailing_zero_offact(10)<<"\n";//this code will not run 
    cout<<"trailing_zero_offact that run without overflow:="<<fun_fact_trailing_optimize_code(20);
}
