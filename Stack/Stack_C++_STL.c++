#include<iostream>
#include<stack>
using namespace std;
// Stack is a container adapter.

int main(){
    stack<int>s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);
    // s.push(5);
    // // cout<<s.top()<<" ";
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // s.pop();
    // cout<<s.size();
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(6);
    s.push(5);
    s.emplace(6,4);
    // cout<<s.empty();
    cout<<"Here"<<endl;
    while (!s.empty())
    // while (s.empty()==false)   <-- this can also be written
    {
        cout<<s.top()<<" ";
        s.pop();
    }

    // all operations in stack like push pop top empty  is of O(1) <- T.C
}