#include<iostream>
bool isprime(int num);
bool isprime(int num){
    int i=0;
    if(num==1 || num==0){
        return false;
    }

    for(int i=2;i<=num;i++)
    {
        if (num%i==0){
            return false;
        }
        return true;
    }
}