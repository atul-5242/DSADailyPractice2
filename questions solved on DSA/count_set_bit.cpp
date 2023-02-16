#include<iostream>
using namespace std;

int main(){
    // n,k=map(int,cin>>)
    int n,k;
    int i,j,cnt=0;
    cout<<"Enter n";
    cin>>n;
    // cin>>k;
    while(n>0){
        if (n&1==1){
            cnt++;
        }
        n=n>>1;//here we have to remeber that we have to store the n also like n=n>>1  not only n>>1 okey.
    }
    cout<<cnt<<" t";
}
