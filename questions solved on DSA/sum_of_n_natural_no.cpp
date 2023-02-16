#include<iostream>
using namespace std;
int sum_n_natural_no_recursion(int n){
    if (n==0){
    return 0;
    }
    else{
        return n+sum_n_natural_no_recursion(n-1);

    }

}
int main(){
    cout<<"Sum is:"<<sum_n_natural_no_recursion(10);
}