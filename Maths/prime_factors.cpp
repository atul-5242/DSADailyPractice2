#include<iostream>
using namespace std;

// ----------------------------------------------------------------------------------->
int Most_Effi_Approch_prime(int num)
{
    if (num==1)
    {
        return 0;
    }
    if(num==2 || num==3){
		return 1;
    }
    if (num%2==0 || num%3==0)
    {
        return 0;
    }
    for (int i = 5; i*i < num; i+=6)
    {
        if (num%i==0 || num%(i+2)==0)
        {
            return 0;
        }
    }
    return 1;
}
// ----------------------------------------------------------------------------------->




// ----------------------------------------------------------------------------------->
void prime_fators(int num){//Navie Approch:-   T.C=O(nlog(n))
    for (int i = 2; i <  num; i++)
    {
        if (Most_Effi_Approch_prime(i)==1)
        {
            int x=i;
            while (num%x==0)
            {
                cout<<i<<" ";
                x=x*i;
            }
        }
    } 
}
// ----------------------------------------------------------------------------------->




// ----------------------------------------------------------------------------------->
// Effi_Approch.
void Effi_prime_factor(int num)
{
    if (num<=1)
    {
        return ;
    }
    
    for (int i = 2; i*i < num; i++)
    {
       while (num%i==0)
       {
            cout<<i<<" ";
            num=num/i;
       }
    }
    if (num>1)
    {
        cout<<num;
    }
}
// ----------------------------------------------------------------------------------->



// ----------------------------------------------------------------------------------->
// Now Last effic_solution
void very_Effi_prime_factor(int num)//T.c=theta(sqareroot(n))
{
    if (num<=1)
    {
        return ;
    }
    // if (num==2) These comment out line are not necessary.
    // {
    //     cout<<2;
    // }
    // if (num==3)
    // {
    //     cout<<3;
    // }
    
    
    if (num%2==0)
    {
         while (num%2==0)
       {
            cout<<2<<" ";
            num=num/2;
       }
    }
    if (num%3==0)
    {
         while (num%3==0)
       {
            cout<<3<<" ";
            num=num/3;
       }
    }
    
    for (int i = 5; i*i < num; i=i+6)
    {
       while (num%i==0)
       {
            cout<<i<<" ";
            num=num/i;
       }
       while (num%(i+1)==0)
       {
            cout<<(i+1)<<" ";
            num=num/(i+1);
       }
    }
    if (num>3)
    {
        cout<<num;
    }
}


// ----------------------------------------------------------------------------------->



int main(){
    int i=0,j=0,k=0;
    // prime_fators(12);
    // Effi_prime_factor(79);
    very_Effi_prime_factor(3);
}