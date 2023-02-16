#include<iostream>
using namespace std;
void one_to_n(int n){
    if (n==0){
        return;
    }
    cout<<n<<" ";
    return one_to_n(n-1);
    cout<<n<<" ";
}
int main(){
    one_to_n(8);
}