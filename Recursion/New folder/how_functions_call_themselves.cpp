#include<iostream>
using namespace std;
void fun1(){
    cout<<"This is fun1 call."<<endl;
}
void fun2(){
    cout<<"Before calling of fun1()"<<endl;
    fun1();
    cout<<"After calling of fun1()"<<endl;    
}
int main(){
    cout<<"Fun2 is now going to call."<<endl;
    fun2();


}