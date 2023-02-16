#include<iostream>
using namespace std;
//Methode 2.:=======================================================================
// More optimized version.

    bool is_pow_of_2(int n)
    {
        if (n==0){
            return false;
        }
        while (n!=1)
        {
            if (n%2!=0)//or here can be used n&1==1
            {
                return false;
            }
            n=n/2;//here can be used n>>1; for cheking the bit.
        }
        return true;
        
    }

    //method 3 by brion kerningon algorithm:===========
    int no_of_set_bit(int n){
        int cnt=0;
        while(n>0){
            if (n&1==1){
                cnt++;
            }
        n=n>>1;
        }
        return cnt;
    }


    // // Method 4:==============================================
    // bool is_2_power(int n){
    //     if (n==0){
    //         return false;
    //     }
    //    return ((n&(n-1))==0);
    
    // }
    bool is_2_power(int n){
        
       return (n!=0)&&((n&(n-1))==0);//more optimized of method 4.>>>>>>>>>>>>>>>>>>>>
    
    }
int main(){
    int n,flag=0;
    cout<<"Enter";
    cin>>n;
    // cout<<is_pow_of_2(n);
    // More line of code by me:=======================================
    // if (n==1){
    //     flag=1;
    // }
    // while (n!=1)
    // {
    //        {
    //     if (n%2==0)
    //     {
    //         flag=1;
    //         n=n/2;
    //     }
    //     else
    //     { 
    //         flag=0;
    //         break;
    //     }
        
        
    // }
    //     /* code */
    // }
    
    
    // if( flag==1){
    //     cout<<"Yes";

    // }
    // else{
    //     cout<<"No";
    // }

    // Less line of Code by gfg:=========================================

    //    Method:===================================================================== // 

    // by brion kerningon algorithm can be used to find the power of two or not:==============

// for method 3:==========================
// cout<<no_of_set_bit(n);
// if (no_of_set_bit(n)!=1){

// cout<<"\nIt is not the power of 2.";
// }
// else{
//     cout<<"Power of 2.";
// }
// ==========================================


// for method 4:===================
cout<<is_2_power(n);
}