#include<iostream>
using namespace std;

int prime(int n){  //Navie Approch:-
    if (n==1)
    {
        return -1;
    }
    for (int i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            return -1;
        }
    }
    return 1;
}

// Effici_Approch:-

int prime_Effi(int num){
    if (num==1)
    {
        return -1;
    }
    for (int i = 2; i *i< num; i++) //we are going till squareroot of number.  because we know that divisors are always appear in pair. 
    {
        if (num%i==0)
        {
            return -1;
        }
    }
    return 1;
    
    
}
int Most_Effi_App(int num)
{
    if (num==1)
    {
        return -1;
    }
    if(num==2 || num==3){
		return 1;
    } 
    if (num%2==0 || num%3==0)
    {
        return -1;
    }
    for (int i = 5; i*i < num; i+=6)
    {
        if (num%i==0 || num%(i+2)==0)
        {
            return -1;
        }
    }
    return 1;
}


void print(int n,int num){
    if (n==1)
    {
        cout<<"The number "<<num<<" is prime"<<endl;
    }
    else{
        cout<<"The number "<<num<<" is not a prime"<<endl;
    }
}

int main(){
    int i=0,j=0,k=0;
    print(prime(79),79);//Navie Approch:-
    print(prime(77),77);//Navie Approch:-
    print(prime_Effi(79),79);// Effici_Approch:-
    print(prime_Effi(77),77);// Effici_Approch:-
    print(Most_Effi_App(79),79);
    print(Most_Effi_App(77),77);
}