#include<iostream>
using namespace std;


int Navie_LCM(int a,int b){
    for (int i = max(a,b);  ; i++)//this is the correct code important.  lCm mai upar jate jaenge naaaaaa.
    {
        if (i%a==0 && i%b==0)
        {
            return i;
        }
    }
    // return a*b;   
}



// Efficient Arroch:------------------>
int GCD_mod(int a,int b){
    if (b==0)
    {
        return a;
    }
    return GCD_mod(b,a%b);//this is optimized version of Euclid Algorithm.
    
}


int Effi_App(int a,int b)
{
    return (a*b)/GCD_mod(a,b);//by the formula [a*b=gcd(a,b)*lcm(a,b)].
}
// T.c=O(log(min(a,b)))     //I have toi see it again the time complexity.


int main(){
    int i=0,j=0,k=0;
    cout<<Navie_LCM(12,9);
}
