#include<iostream>

// NAIVE METHOD:==============

// #include"isprime1_by naive_method.cpp"
#include<vector>
using namespace std;
int main(){
    int i,num,j,k;
    cout<<"Enter the number below which you want to find the prime number:";
    cin>>num;
    vector<bool>is_prime(num,true);

    for(int i=2;i<=num;i++){
        if (is_prime[i])
        {
            for(int j=i*2;j<=num;j=j+i){
                is_prime[j]=false;
            }

    }
    
}
for(int i=2;i<=num;i++){
    if (is_prime[i])
        cout<<i<<" ";
    }cout<<"\n";
}

// LITTLE MORE OPTIMIZED IN COMPAROOSN OF T(n):======BELOW:=======




// #include"isprime1_by naive_method.cpp"
#include<vector>
using namespace std;
int main(){
    int i,num,j,k;
    cout<<"Enter the number below which you want to find the prime number:";
    cin>>num;
    vector<bool>is_prime(num,true);

    for(int i=2;i*i<=num;i++){
        if (is_prime[i])////////////////////////////////i*i is op
        {
            for(int j=i*2;j<=num;j=j+i){
                is_prime[j]=false;
            }

    }
    
}
for(int i=2;i<=num;i++){
    if (is_prime[i])
        cout<<i<<" ";
    }cout<<"\n";
}


