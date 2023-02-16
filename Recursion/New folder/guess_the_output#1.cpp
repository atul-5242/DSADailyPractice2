//Question 1.)============
// OF OUTPUT:============
// 3
// 2
// 1
// 1
// 2
// 3


/*

#include<iostream>
using namespace std;

void fun(int n){
    if (n==0){
        return ;
    }
    cout<<n<<endl;
    fun(n-1);
    cout<<n<<endl;
}

int main(){
fun(3);

}

*/



//Question 2.)
// OF OUTPUT:=
// 1
// 2
// 1
// 3
// 1
// 2
// 1

#include<iostream>
using namespace std;

void fun(int n){
    if (n==0)
        return;
    fun(n-1);
    cout<<n<<endl;
    fun(n-1);
}

int main(){
    
    fun(3);

}
