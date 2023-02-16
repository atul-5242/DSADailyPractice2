#include<iostream>
using namespace std;
int fun_fact_trailing(int num){
    int sum=0;
    for (int i = 5; i < num; i=i*5)//here writing i=5 at starting is most important.
    {
        int j=0;
        sum=sum+num/i;
    }
    return sum;
    
}
int main(){
    cout<<fun_fact_trailing(20);
}