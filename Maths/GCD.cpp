// This is the problem that can be mapped by the problem of gratest resquare that can be insert to fill the rectangle.


#include<iostream>
using namespace std;

// navie approch:--------------------------------------------->
int GCD(int n1,int n2)
{
    int temp=min(n1,n2);

    for(int i = temp; i>0 ; i--)
    {
        if (n1%temp==0 &&n2%temp==0)
        {
                return temp;            
        }
        
    }return 1;
    
}
// ------------------------------------------------------------->
// Effi_A:->
// int GCD_Effi_A(int n1,int n2)
// {
//     while (n1!=n1)//by euclid method of subtraction .
//     {
//         if(n1>n2){
//             n1=n1-n2;
//         }
//         else{
//             n2=n2-n1;
//         }
//     }
//     return n1;
// }

int GCD_Effi_A(int n1,int n2)//shi wala 
{
	while (n1!=n2)
	{
		if(n1>n2){
			n1=n1-n2;
		}
		else{
			n2=n2-n1;
		}
	}
	return n1;	
}
// int GCD(int n1,int n2)//galat wala .
// {
//     while (n1!=n1)
//     {
//         if(n1>n2){
//             n1=n1-n2;
//         }
//         else{
//             n2=n2-n1;
//         }
//     }
//     return n1;
// }



// EUCLID METHOD BY MODULU DIVISION:-------->

int GCD_mod(int a,int b){
    if (b==0)
    {
        return a;
    }
    return GCD_mod(b,a%b);//this is optimized version of Euclid Algorithm.
    
}


int main(){
    int i=0,j=0,k=0;

    // cout<<GCD(9,3)<<endl;
    cout<<GCD_Effi_A(12,15);
    // cout<<max(456,45);
    // cout<<max(2,1,3,234,6,456,45);//this is wron max is made only for two argumnents.
}