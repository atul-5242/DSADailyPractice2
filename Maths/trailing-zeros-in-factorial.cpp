// Trailing Zeros in Factorial

int trailing_zeroes(long long num){//navie but this will not work for large numbers.

    int cnt=0;
    while (num!=0)
    {
        if (num%10==0)
        {
            cnt++;
        }
        else{
            break;
        }
        num=num/10;
    }
    return cnt;
    
}



int count_Effi_for_large_number(int num){
    int cnt=0;
    for (int i = 5;i<=num  ; i=i*5 )
    {
        cnt=cnt+(num/(i));
       
    }
    return cnt;
    
}
// int count(long long num){        //Wrong Solution this is (my solution which is not working but i think i opt right logic i have to check it by someone.)

//     int cnt=0;
//     while (num!=0)
//     {
//         if (num%2==0 && num%5==0)
//         {
//             cnt++;
//         }
//         else{
//             break;
//         }
//     }
//     return cnt;
// }

//it currently remains try to complete it.
    
long long factorial_(int num){
    long long val=1;
    for (int  i = 2; i <= num; i++)
    {
        val=val*i;
    }
    return val;
}



#include<iostream>
using namespace std;
int main(){
    int i=0,j=0,k=0;
    // cout<<factorial_(100)<<endl; ignor this type of large number.

    // cout<<trailing_zeroes(factorial_(10))<<endl;
    // cout<<count(factorial_(100));  ---Wrong---

    cout<<count_Effi_for_large_number(100);//by this we can find trailing zeros withou finding the factoial.


}