#include<iostream>
using namespace std;
// Navi Approch

int square_root(int num){
    int sqr=1;
    while (sqr*sqr<=num)
    {
        if (sqr*sqr==num)
            return sqr;   
        sqr=sqr+1;
    }
return sqr;

}
// Most efficient way of above code that written.
// int square_root(int num){
//     int sqr=1;
//     while (sqr*sqr<=num)
//     {
//         sqr++;
//     }
// return sqr-1;

// }



// Efficent APproch(EA()) =>
// BY Binary Search:->
// >-----------------------------------------------------------------------------------<

int effi_sqrt(int num,int l,int h){
    int ans=0;
    if(l<=h){
        int mid=l+(h-l)/2;
        if(mid*mid==num){
            return mid;
        }
        else if(mid*mid>num){
            return effi_sqrt(num,l,mid-1);
        }
        else{
            ans=mid;
            return effi_sqrt(num,mid+1,h);
        }
    }
    return ans;

} 
// >-----------------------------------------------------------------------------------<
int main(){
    int i=0,j=0,k=0;
    cout<<square_root(9)<<endl;
    cout<<effi_sqrt(9,0,9);

}