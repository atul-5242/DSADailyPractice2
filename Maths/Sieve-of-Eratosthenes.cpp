// To find All the prime numbers:------------>
#include<vector>
#include<iostream>
using namespace std;

void Seive_of_eratho(int num){
    vector<int>v={num,true};
    for (int i = 1; i < num; i++)
    {
        if (num%2==0)
    {
         while (num%2==0)
       {
            v[i]=false;
       }
    }
    if (num%3==0)
    {
         while (num%3==0)
       {
            v[i]=false;
           
       }
    }
    
    for (int i = 5; i*i < num; i=i+6)
    {
       while (num%i==0)
       {
           
       }
       while (num%(i+1)==0)
       {
          
       }
    }
    if (num>3)
    {
        cout<<num;
    }
        
    }
    
}


int main(){
    int i=0,j=0,k=0;
}

