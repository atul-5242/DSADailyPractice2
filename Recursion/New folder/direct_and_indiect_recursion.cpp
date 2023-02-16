#include<iostream>
using namespace std;
void function2();
void function1();



//Direct recursion.
void fun1(){
    cout<<"This is fun1."<<endl;
    fun1();
}
//===============================

//Indirect recursion:===

void function1(){
    cout<<"This is function1."<<endl;
    function2();
}
void function2(){
    cout<<"This is function2."<<endl;
    function1();
}


//A recurion program having base com=ndition:=========================

void fun_sec(int n){
    if (n==0){
        return ;
    }
        cout<<"GFG"<<endl;
    fun_sec(n-1);
}

int main(){
    // function1();
    fun_sec(5);
}
