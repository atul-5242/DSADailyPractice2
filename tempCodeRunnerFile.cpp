
#include<iostream>
using namespace std;
int no_of_set_bit(int n){
        int cnt=0;
        while(n>0){
            if (n&1==1){
                cnt++;
            }
            n>>1;
        }
        return cnt;
    }
int main(){
    int n,flag=0;
    // int n;
    cin>>n;
    cout<<no_of_set_bit(n);

}