// POINT 1.) CODE:=====================
// #include<iostream>
// using namespace std;
// int power(int base,int pow){
//     int result=1;
//     while (pow>0)
//     {
//         if (pow%2!=0){
//             result=result*base;
//         }
//         base=base*base;
//         pow=pow/2;
//     }
//     return result;
    
// }
// int main(){
//     int i,j,k;
//     cout<<power(3,2)<<endl;
//     cout<<power(3,5);

// }
// ============================================================================================Same code but some small changes below:================================


// 2.)POINT 2 CODE IS IMPORTANT:=============
#include<iostream>
using namespace std;
int power(int base,int pow){
    int result=1;
    while (pow>0)
    {
        if (pow&1==1){
            result=result*base;
        }
        base=base*base;
        pow=pow>>1;
    }
    return result;
    
}
int main(){
    int i,j,k;
    cout<<power(3,2)<<endl;
    cout<<power(4,5)<<endl;
    cout<<power(3,5);

}

// 3.)POINT:===========================================================================================


