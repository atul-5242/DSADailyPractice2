#include<iostream>
using namespace std;

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
int main(){
    int i=0,j=0,k=0;
    cout<<square_root(9);

}